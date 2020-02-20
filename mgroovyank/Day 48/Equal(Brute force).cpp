// https://www.interviewbit.com/problems/equal/
vector<int> Solution::equal(vector<int> &A) {
    map<int, vector<int> > hash;
    vector<int> ans;
    int n = A.size();
    for(int i=0;i<n;i++){
        map<int, vector<int> >::iterator itr = hash.find(A[i]);
        if(itr == hash.end()){
            vector<int> temp;
            temp.push_back(i);
            hash.insert(make_pair(A[i], temp));
        }else{
            itr->second.push_back(i);
        }
    }
    for(int a=0;a<n;a++){
        for(int b = a+1;b<n;b++){
            for(int c = a+1;c<n;c++){
                if(c == b){
                    continue;
                }
                int temp = A[a] + A[b] - A[c];
                map<int, vector<int> >::iterator itr = hash.find(temp);
                vector<int> v;
                if(itr!=hash.end()){
                  v = itr->second;
                }else{
                  continue;
                }
                for(int i=0;i<v.size();i++){
                    if(v[i]>c && v[i]!=b){
                        ans.push_back(a);
                        ans.push_back(b);
                        ans.push_back(c);
                        ans.push_back(v[i]);
                        return ans;
                    }
                }
            }
        }
    }
}
