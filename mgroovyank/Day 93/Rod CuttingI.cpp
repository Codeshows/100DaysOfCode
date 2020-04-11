// https://www.interviewbit.com/problems/rod-cutting/


int rodCutHelper(int start, int end, vector<int> &B, vector<vector<int> > &min_ans, 
                    vector<vector<int> > &min_pt){
    if(min_ans[start][end] != -1){
        return min_ans[start][end];
    }
    int ans = INT_MAX;
    for(int i=0;i<B.size();i++){
        if(B[i] <= start || B[i] >= end){
            continue;
        }
        int temp =rodCutHelper(start, B[i], B, min_ans, min_pt) + rodCutHelper(B[i], end, B, min_ans, min_pt) + (end-start);
        if(temp < ans){
            ans = temp;
            min_pt[start][end] =  B[i];
        }else if(temp == ans){
            min_pt[start][end] =  min(min_pt[start][end], B[i]);
        }
    }
    if(ans == INT_MAX){
        return min_ans[start][end] = 0;
    }
    return min_ans[start][end] = ans;
}
void sol (int left , int right, vector<int> &v, vector<vector<int> > &min_pt){
    if (min_pt[ left ][right] == INT_MAX){
        return;
    }
    v.push_back(min_pt[left ][right]);
    sol(left, min_pt[left ][right], v, min_pt);
    sol(min_pt[left ][right], right, v, min_pt);
}
vector<int> Solution::rodCut(int A, vector<int> &B) {
    vector<vector<int> > min_ans(A+1, vector<int>(A+1, -1));
    vector<vector<int> > min_pt(A+1, vector<int>(A+1, INT_MAX));
    vector<int> v;
    rodCutHelper(0, A, B, min_ans, min_pt);
    sol(0, A, v, min_pt);
    return v;
}
