// https://www.interviewbit.com/problems/word-break-ii/
// Time Complexity: O(N^3)


vector<string> Solution::wordBreak(string A, vector<string> &B) {
    int n = A.length();
    set<string> b(B.begin(), B.end());
    vector<vector<string> > words(n + 1, vector<string>(0));
    words[n].push_back("");
    for(int i=n-1;i>=0;i--){
        vector<string> values;
        for(int j=i+1;j<=n;j++){
            string temp = A.substr(i, j - i);
            if(b.find(temp) != b.end()){
                for(int k=0;k<words[j].size();k++){
                    values.push_back(temp+(words[j][k].empty() ? "" : " ")+words[j][k]);
                }
            }
        }
        words[i] = values;
    }
    return words[0];
}

