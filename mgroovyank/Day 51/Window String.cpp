// https://www.interviewbit.com/problems/window-string/


string Solution::minWindow(string A, string B) {
    map<char, int> B_cnt, A_cnt;
    int a = A.length();
    int b = B.length();
    for(int k=0;k<b;k++){
        B_cnt[B[k]]++;
    }
    int min_l = INT_MAX;
    int min_idx = 0;
    int end = 0, start = 0; 
    int new_B_length = b;
    while(end < a){
        if(B_cnt[A[end]] > 0){
            new_B_length--;
        }
        B_cnt[A[end]]--;
        end++;
        while(new_B_length == 0){
            if(end - start < min_l){
                min_l = end - start;
                min_idx = start;
            }
            if(B_cnt[A[start]] == 0){
                new_B_length++;
            }
            B_cnt[A[start]]++;
            start++;
        }
    }
    if(min_l==INT_MAX){
        return "";
    }
    return A.substr(min_idx, min_l);    
}
