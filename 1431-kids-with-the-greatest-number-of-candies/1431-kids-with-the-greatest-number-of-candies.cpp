class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=*max_element(candies.begin(), candies.end())){
                result.push_back(1);
            } else {
                result.push_back(0);
            }
        }
        return result;
    }
};