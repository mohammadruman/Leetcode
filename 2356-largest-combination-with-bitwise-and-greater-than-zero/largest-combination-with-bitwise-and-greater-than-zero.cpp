class Solution {
public:
    int largestCombination(vector<int>& candidates) {
      vector<int>count(24,0);
      //count[i] = how many bits are in the ith bit set
      int result = 0;
        for(int i =0; i <24 ; i++){
            for(int &num:candidates){
                if((num & (1<<i))!=0){
                count[i]++;
                }
            }
            result = max(count[i],result);
        }
        return result;
    }
};