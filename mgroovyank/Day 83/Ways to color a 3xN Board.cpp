//https://www.interviewbit.com/problems/ways-to-color-a-3xn-board/
//Time Complexity: O(N*36*36)

long long int MOD = 1e9 + 7;
typedef long long int ll;
ll dp[4][4][4][100001];
struct triplet{
    int x,y,z;
};
vector<triplet> t;
void possibleTriplets(){
    t.clear();
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            for(int k=0; k<4; k++){
                if(i!=j && j!=k){
                    t.push_back({i, j, k});
                }
            }
        }
    }
}
bool isCompatible(const triplet &t1, const triplet &t2){
    if(t1.x == t2.x || t1.y == t2.y || t1.z == t2.z){
        return false;
    }
    return true;
}
int Solution::solve(int A) {
    if(A <= 0){
        return 0;
    }
    memset(dp, -1, sizeof(dp));
    possibleTriplets();
    for(int i=0;i<A;i++){
        for(int j=0;j<36;j++){
            if(i == 0){
                dp[t[j].x][t[j].y][t[j].z][0] = 1;
                continue;
            }
            ll temp = 0;
            for(int k=0;k<36;k++){
                if(isCompatible(t[j], t[k])){
                    temp = (temp + dp[t[k].x][t[k].y][t[k].z][i-1]%MOD)%MOD;
                }
            }
            dp[t[j].x][t[j].y][t[j].z][i] = temp;
        }
    }
    ll ways = 0;
    for(int triplet =0;triplet<36;triplet++){
        ways = (ways + dp[t[triplet].x][t[triplet].y][t[triplet].z][A-1])%MOD;
    }
    return ways;
}
