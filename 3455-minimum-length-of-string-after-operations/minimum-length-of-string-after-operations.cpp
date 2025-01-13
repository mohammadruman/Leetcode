class Solution {
public:
    int minimumLength(string s) {
        int ans=0;
       vector<int>v1(26,0);
       for(auto &i:s){
        v1[i-'a']++;
        if(v1[i-'a']>=3){
            v1[i-'a']-=2;
        }
       }
       for(int i =0; i < v1.size();i++){
        ans+=v1[i];
       }
       
       return ans;
    }
};