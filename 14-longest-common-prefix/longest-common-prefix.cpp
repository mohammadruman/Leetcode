class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string ans="";
        string s=strs[0];
        string e = strs[n-1];
        int i =0;
        while(i < s.length() && i < e.length() &&s[i]==e[i]){
            ans+=s[i];
            i++;
        }
        return ans;
    }
};