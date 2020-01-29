//https://www.interviewbit.com/problems/max-continuous-series-of-1s/

vector<int> Solution::maxone(vector<int> &A, int B) {
    int n = A.size();
    int i=0,j=0;
    int fin_l,fin_ans;
    fin_l=0;
    fin_ans = INT_MIN;
    vector<int> ans_v;
    while(i<n){
        if(i!=0 && A[i-1] == 0){
            B++;
        }
        while(j<n){
            if(A[j] == 0 && B){
                B--;
                j++;
                continue;
            }
            if(A[j] == 1){
                j++;
                continue;
            }
            break;
        }
        if(j-i>fin_ans){
            fin_l = i;
            fin_ans = max(fin_ans, j-i);
        }
        i++;
    }
    for(int i=0;i<fin_ans;i++){
        ans_v.push_back(fin_l+i);
    }
    return ans_v;
}
