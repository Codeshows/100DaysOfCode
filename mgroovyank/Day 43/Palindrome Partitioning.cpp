// https://www.interviewbit.com/problems/palindrome-partitioning/
vector<vector<string>> res;
bool isPalindrome(string s){
    int n = s.length();
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(s[i] == s[j]){
            i++;
            j--;
            continue;
        }
        return false;
    }
    return true;
}
void get_partition(string A, int idx, vector<string> prev_partitions){
    int n = A.length();
    if(idx>=n){
        res.push_back(prev_partitions);
        return;
    }
    string current_partition = "";
    for(int i=idx;i<n;i++){
        current_partition = current_partition + A[i];
        if(isPalindrome(current_partition)){
            prev_partitions.push_back(current_partition);
            get_partition(A, i+1, prev_partitions);
            prev_partitions.pop_back();
        }else{
            continue;
        }
    }
    return;
}
vector<vector<string> > Solution::partition(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    res.clear();
    vector<string> prev_partitions;
    get_partition(A, 0, prev_partitions);
    sort(res.begin(), res.end());
    return res;
}
