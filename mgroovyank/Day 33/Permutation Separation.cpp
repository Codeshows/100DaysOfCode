//https://codeforces.com/contest/1295/problem/E

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = int(2e5) + 99;

int n;
vector<int> p(N), rp(N), a(N);
vector<ll> b(N), t(4*N), add(4*N);

void build(int v, int l, int r){
	if(r - l == 1){
		t[v] = b[l];
		return;
	}

	int mid = (l + r) / 2;	
	build(v * 2 + 1, l, mid);
	build(v * 2 + 2, mid, r);
	t[v] = min(t[v * 2 + 1], t[v * 2 + 2]); 
}

void push(int v, int l, int r){
	if(add[v] != 0){
		if(r - l > 1)
			for(int i = v+v+1; i < v+v+3; ++i){
				add[i] += add[v];
				t[i] += add[v];
			}
		add[v] = 0;
	}
}

void upd(int v, int l, int r, int L, int R, int x){
	if(L >= R) return;
	if(l == L && r == R){
		add[v] += x;
		t[v] += x;
		push(v, l, r);
		return;
	}
	
	push(v, l, r);
	int mid = (l + r) / 2;
	upd(v * 2 + 1, l, mid, L, min(mid, R), x);
	upd(v * 2 + 2, mid, r, max(mid, L), R, x);

	t[v] = min(t[v * 2 + 1], t[v * 2 + 2]);
}

void upd(int l, int r, int x){
	upd(0, 0, n, l, r, x);
}

ll get(int v, int l, int r, int L, int R){
	if(L >= R){
		return INT_MAX;
	} 

	push(v, l, r);
	if(l == L && r == R)
		return t[v];

	int mid = (l + r) / 2;
	return min(get(v * 2 + 1, l, mid, L, min(R, mid)), 
		   get(v * 2 + 2, mid, r, max(L, mid), R));		
}

ll get(int l, int r){
	return get(0, 0, n, l, r);
}

int main() {
	cin>>n;
	for(int i = 0; i < n; ++i){
		cin>>p[i];
                p[i]--;
                rp[p[i]] = i;
	}
	for(int i = 0; i < n; ++i){
		cin>>a[i];
		if(i == 0){
			b[0] = a[0];
		}else{
			b[i] = b[i-1] + a[i];
		}
	}
		
	build(0, 0, n);
	
	long long res = get(0, n - 1);
	for(int i = 0; i < n; ++i){
	    int pos = rp[i];
		upd(pos, n, -a[pos]);
		upd(0, pos, a[pos]);
		res = min(res, get(0, n - 1));
	}
	
	cout << res << endl;
	return 0;
}
