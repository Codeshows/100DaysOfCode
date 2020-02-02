//https://codeforces.com/contest/1295/problem/E

#include<bits/stdc++.h>
using namespace std;

const int N = int(2e5) + 99;

int n;
int p[N];
int rp[N];
int a[N];

long long b[N];
long long t[4 * N];
long long add[4 * N];

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

long long get(int v, int l, int r, int L, int R){
	if(L >= R) return 1e18;

	push(v, l, r);
	if(l == L && r == R)
		return t[v];

	int mid = (l + r) / 2;
	return min(get(v * 2 + 1, l, mid, L, min(R, mid)), 
		   get(v * 2 + 2, mid, r, max(L, mid), R));		
}

long long get(int l, int r){
	return get(0, 0, n, l, r);
}

int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; ++i){
		scanf("%d", p + i);
        --p[i];
        rp[p[i]] = i;
	}
	for(int i = 0; i < n; ++i)
		scanf("%d", a + i);
	
	b[0] = a[0];
	for(int i = 1; i < n; ++i)
		b[i] = a[i] + b[i - 1];
	build(0, 0, n);
	
	long long res = get(0, n - 1);
	//for(int i = 0; i < n; ++i) cout << get(i, i+1) << ' ';cout << endl;
	for(int i = 0; i < n; ++i){
	    int pos = rp[i];
		upd(pos, n, -a[pos]);
		upd(0, pos, a[pos]);
		res = min(res, get(0, n - 1));
		//for(int i = 0; i < n; ++i) cout << get(i, i+1) << ' ';cout << endl;
	}
	
	cout << res << endl;
	return 0;
}
