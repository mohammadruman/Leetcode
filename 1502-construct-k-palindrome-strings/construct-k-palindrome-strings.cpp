class Solution {
public:
    bool canConstruct(string s, int k) {
        //int k
        // string s 
        // we have to generate a palindrome string using string s 
        // that should be greater than or equal to  k
        unordered_map<int,int>m1;
        int oddcount=0;
         if(s.length()<k)return false;
         for(auto &i:s){
            m1[i]++;
         }
         for(auto &i:m1){
            if(i.second%2!=0)oddcount++;
         }
         if(oddcount>k)return false;
         return true;
    }
};