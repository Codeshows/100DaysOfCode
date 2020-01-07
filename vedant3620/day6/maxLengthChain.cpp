#include <bits/stdc++.h>
using namespace std;
struct val{
	int first;
	int second;
};
int maxChainLen(struct val p[],int n);
int main() {

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}
bool customSort(val a,val b){
    if(a.second!=b.second) return a.second<b.second;
    else return a.first<b.first;
}
int maxChainLen(struct val p[],int n)
{
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=1;
    }
    sort(p,p+n,customSort);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(p[j].second<p[i].first){
                b[i]=max(b[i],b[j]+1);
            }
        }
    }
    int m=0;
    for(int i=0;i<n;i++){
        m=max(m,b[i]);
    }
    return m;
    
}