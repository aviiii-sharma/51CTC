class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        vector<string> word1sum;
        vector<string> word2sum;
        string concentratedString1 = accumulate(word1.begin(),word1.end(),string());
        string concentratedString2 = accumulate(word2.begin(),word2.end(),string());
        word1sum.push_back(concentratedString1);
        word2sum.push_back(concentratedString2);
        if (word1sum == word2sum) {
            return true;
        } else {
            return false;
        }
    }
};