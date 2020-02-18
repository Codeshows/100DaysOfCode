// https://www.interviewbit.com/problems/equal/


vector<int> Solution::equal(vector<int> &A) {
    map<int, pair<int, int>  > hash;
    vector<int> ans;
    int n = A.size();
    for(int a=0;a<n;a++){
        for(int b = a+1;b<n;b++){
            int temp = A[a] + A[b];
            map<int, pair<int, int> >::iterator itr = hash.find(temp);
            pair<int, int> v;
            if(itr!=hash.end()){
                v = itr->second;
                int ai = v.first;
                int bi = v.second;
                if(ai != a && ai != b && bi != a && bi != b){
                    vector<int> t;
                    t.push_back(ai);
                    t.push_back(bi);
                    t.push_back(a);
                    t.push_back(b);
                    if (ans.size() == 0){
                        ans = t;
                    }else{
                        bool shouldReplace = false;
                        for(int i1 = 0; i1 < ans.size(); i1++){
                            if (ans[i1] < t[i1]){
                                break;
                            }
                            if(ans[i1] > t[i1]){
                                shouldReplace = true;
                                break;
                            }
                        }
                        if (shouldReplace){
                            ans = t;
                        }
                    }
                }
            }else{
                hash.insert(make_pair(temp, make_pair(a, b)));
            }  
        }
    }
    return ans;
}
