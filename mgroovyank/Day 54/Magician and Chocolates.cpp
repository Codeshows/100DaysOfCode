// https://www.interviewbit.com/problems/magician-and-chocolates/

int Solution::nchoc(int A, vector<int> &B) {
    long long int MOD = 1000000007;
    priority_queue<long long int> bags;
    long long int n = B.size();
    for(long long int i=0;i<n;i++){
        bags.push(B[i]);
    }
    long long int ans = 0;
    long long int i=0;
    while(i<A){
        long long int a = bags.top();
        ans = (ans+a%MOD)%MOD;
        bags.pop();
        bags.push(floor(a/2));
        i++;
    }
    return ans%MOD;
}
