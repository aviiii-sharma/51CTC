class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> final;
        for (int i=0;i<n;i++){
            final.push_back(nums[i]);
            final.push_back(nums[i+n]);
            }
        return final;
    }
    
};