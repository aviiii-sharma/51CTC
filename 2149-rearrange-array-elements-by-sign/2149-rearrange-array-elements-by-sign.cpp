class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    
    vector<int> v1;
    vector<int> v2;
    
    for (int i = 0; i < n; i++) {
        if (nums[i] >= 0) {
            v1.push_back(nums[i]);
        } else {
            v2.push_back(nums[i]);
        }
    }

    vector<int> v3;

    int i = 0, j = 0;
    while (i < v1.size() && j < v2.size()) {
        v3.push_back(v1[i++]); 
        v3.push_back(v2[j++]); 
    }
    
    while (i < v1.size()) {
        v3.push_back(v1[i++]);
    }

    while (j < v2.size()) {
        v3.push_back(v2[j++]);
    }
    
    return v3;
     
    }
};