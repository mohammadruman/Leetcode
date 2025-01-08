class Solution {
public:
 bool isPrefixAndSuffix(string str1, string str2){
    int n= str1.size();
    int m = str2.size();
   return (m >= n && str2.substr(0, n)
    == str1 && str2.substr(m - n, n) == str1);
 }
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size(); 
        int count =0;
        for(int i =0 ; i < n ; i++){
            for(int j =i+1 ; j < n ;j++){
              if(isPrefixAndSuffix(words[i],words[j])){
                count++;
              }  
            }
        }
        return count;
    }
};