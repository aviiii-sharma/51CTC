class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i+=2){
            int value = nums[i+1];
            int count = nums[i];
            ans.insert(ans.end(), count, value);
        }
        return ans;
    }
};