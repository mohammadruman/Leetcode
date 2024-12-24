class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(char ch:word1){
            v1[ch-'a']++;
        }
            for(char ch:word2){
            v2[ch-'a']++;
        }
        for(int i =0 ; i < v1.size();i++){
             if (abs(v1[i] - v2[i]) > 3) { 
                return false;
            }
        }
        return true;
    }
};