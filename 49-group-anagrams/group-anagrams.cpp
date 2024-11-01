class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
       vector<vector<string>>st;
       for(auto x:strs){
        string temp = x;
        sort(x.begin(),x.end());
        mp[x].push_back(temp);
       }

       for(auto x:mp){
          st.push_back(x.second); 
       }
       return st;
    }
};