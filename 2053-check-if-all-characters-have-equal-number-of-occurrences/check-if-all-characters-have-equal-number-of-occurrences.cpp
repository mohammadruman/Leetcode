class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>v(26,0);
      for(char ch:s){
        v[ch-'a']++;
      }
      int freq=0;
      for(int i =0; i <v.size();i++){
        if(v[i]>=1){
            freq=v[i];
            break;
            }
      }
      for(int i =0; i < v.size();i++){
        if(v[i]!=0 && v[i]!=freq){
            return false;
        }
      }
      return true;
    }
};