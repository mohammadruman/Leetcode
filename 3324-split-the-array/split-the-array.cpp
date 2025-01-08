class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>m1;
        for(auto &i : nums){
             
            m1[i]++;
            if(m1[i]>2)return false;
        }
       
        return true;
    }
};