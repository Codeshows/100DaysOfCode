#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int priority(char s)
{
    switch(s)
    {
        case '+' : return 1;
        case '-' : return 2;
        case '*' : return 3;
        case '/' : return 4;
        case '^' : return 5;
        default : return 0;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll test_cases;
    cin >> test_cases;
    while(test_cases --)
    {
        stack<char> st;
        string expr;
        cin >> expr;
        for(int iter = 0; iter < expr.length(); iter++)
        {
            if(expr[iter] == '(')
            {
                st.push('(');
            }
            else if(expr[iter] == ')')
            {
                while(st.top()!='(')
                {
                    cout << st.top();
                    st.pop();
                }
                st.pop();
            }
            else if(!priority(expr[iter]))
            {
                cout << expr[iter]; 
            }
            else if(priority(expr[iter]) > priority(st.top())) 
            {
                st.push(expr[iter]);
            }
            else if(priority(expr[iter]) <= priority(st.top()))
            {
                while(priority(expr[iter]) <= priority(st.top()))
                {
                    cout << st.top();
                    st.pop();
                }
                st.push(expr[iter]);
            }
            
        }
        cout << endl;
    }
    return 0;
}
