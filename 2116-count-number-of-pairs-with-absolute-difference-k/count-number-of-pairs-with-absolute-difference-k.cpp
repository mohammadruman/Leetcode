class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int cnt=0;
        unordered_map<int,int>mp;
        for(int num:nums){
            if(mp.find(num+k)!=mp.end()){
                cnt+=mp[num+k];
            }
            if(mp.find(num-k)!=mp.end()){
                cnt+=mp[num-k];
            }
            mp[num]++;
        }
        return cnt;
    }
};