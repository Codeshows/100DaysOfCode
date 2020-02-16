// https://www.interviewbit.com/problems/kth-permutation-sequence/
int factorial(int a){
    if(a>12){
        return INT_MAX;
    }
    if(a == 0){
        return 1;
    }
    return a*factorial(a-1);
}
void getPermutationHelper(string &per, int prev_options, int B, vector<int>options_avail){
    if(options_avail.size() == 0){
        return;
    }
    int i=0;
    int temp = factorial(options_avail.size()-1);
    while(prev_options + temp < B){
        i++;
        prev_options += temp;
    }
    per = per + to_string(options_avail[i]);
    options_avail.erase(options_avail.begin() + i);
    getPermutationHelper(per, prev_options, B, options_avail);
    return;
}
string Solution::getPermutation(int A, int B) {
    string per;
    vector<int> v;
    for(int i=1;i<=A;i++){
        v.push_back(i);
    }
    getPermutationHelper(per, 0, B, v);
    return per;
}

