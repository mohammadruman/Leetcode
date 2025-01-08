class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>m1;
        for(auto &i : nums){
            m1[i]++;
        }
        for(auto i:m1){
            if(i.second>2)return false;
        }
        return true;
    }
};