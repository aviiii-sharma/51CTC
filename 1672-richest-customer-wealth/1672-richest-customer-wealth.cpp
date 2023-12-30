class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int k;
        vector<int> ans;
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                k+=accounts[i][j];
            }
            ans.push_back(k);
            k=0;
        }
        return *max_element(ans.begin(), ans.end());
    }
};