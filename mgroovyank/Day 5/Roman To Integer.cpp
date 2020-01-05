// https://www.interviewbit.com/problems/roman-to-integer/
int Solution::romanToInt(string A) {
    unordered_map<char,int> up;
    up['I'] = 1;
    up['V']=5;
    up['X']=10;
    up['L']=50;
    up['C']=100;
    up['D']=500;
    up['M']=1000;
    stack<int> st;
    int value = 0;
    for(int i=0;i<A.length();i++){
        value+=up[A[i]];
    while(!st.empty()&&up[A[i]]>up[st.top()]){
        value-=2*up[st.top()];
        st.pop();
    }
    st.push(A[i]);
    }
    return value;
}
