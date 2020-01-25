class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector <int> v;
        
        for(int i=0;i<nums.size()/2;i++){
            while(nums[2*i]--){
                v.push_back(nums[2*i+1]);
            }
        }
        return v;
    }
};
