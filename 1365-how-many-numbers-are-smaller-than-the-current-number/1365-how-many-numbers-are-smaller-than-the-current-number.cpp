class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int k = 0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]> nums[j]){
                    k++;
                }
            }
            ans.push_back(k);
            k = 0;
        }
        return ans;
    }
};