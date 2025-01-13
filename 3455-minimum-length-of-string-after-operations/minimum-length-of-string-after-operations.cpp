class Solution {
public:
    int minimumLength(string s) {
        int ans=0;
        int n = s.size();
       vector<int>v1(26,0);
       for(auto &i:s){
        v1[i-'a']++;
        if(v1[i-'a']>=3){
            v1[i-'a']-=2;
            ans+=2;
        }
       }
       return n-ans;
    }
};