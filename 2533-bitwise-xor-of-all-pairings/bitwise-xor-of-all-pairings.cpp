class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
       unordered_map<int , long >m1;
       for(auto &num:nums1){
        m1[num]+=n;
       }
       for(auto &num:nums2){
        m1[num]+=m;
       }
       int res =0;
       for(auto &it :m1){
        if(it.second%2!=0){ //odd
        res^=it.first;
        }
       }
    return res;
       
    }
};