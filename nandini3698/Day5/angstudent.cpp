//Codeforces contest 1287-A Angry Students:-
/*It's a walking tour day in SIS.Winter, so t groups of students are visiting Torzhok. Streets 
of Torzhok are so narrow that students have to go in a row one after another.

Initially, some students are angry. Let's describe a group of students by a string of capital 
letters "A" and "P":

"A" corresponds to an angry student
"P" corresponds to a patient student
Such string describes the row from the last to the first student.

Every minute every angry student throws a snowball at the next student. Formally, if an angry 
student corresponds to the character with index i in the string describing a group then they 
will throw a snowball at the student that corresponds to the character with index i+1 
(students are given from the last to the first student). If the target student was not angry 
yet, they become angry. Even if the first (the rightmost in the string) student is angry, 
they don't throw a snowball since there is no one in front of them.

Input
The first line contains a single integer t — the number of groups of students (1≤t≤100). The 
following 2t lines contain descriptions of groups of students.

The description of the group starts with an integer ki (1≤ki≤100) — the number of students in 
the group, followed by a string si, consisting of ki letters "A" and "P", which describes the 
i-th group of students.

Output
For every group output single integer — the last moment a student becomes angry.*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
 
int main(){
      test{
            int n;
            cin>>n;
            string a;
            cin>>a;
            ll mx=0;
            for(ll i=0;i<n;i++){
                  ll c=0;
                  if(a[i]=='A'){
                        ll j=i+1;
                        while(a[j]=='P'){
                              c++;j++;i++;
                        }
                  }
                  mx=max(mx,c);
            }
            cout<<mx<<endl;
      }
      return 0;
}