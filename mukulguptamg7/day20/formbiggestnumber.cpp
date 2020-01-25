#include<iostream>
using namespace std;
int main()
{
  int tc;
  cin>>tc;
  while(tc>0)
  {
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
      cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        if(s[j]+s[i]>s[i]+s[j])
        {
          string b=s[j];
          s[j]=s[i];
          s[i]=b;
        }
      }
    }
    for(int i=0;i<n;i++)
      cout<<s[i];
    cout<<endl;
    tc--;
  }
  return 0;
}
