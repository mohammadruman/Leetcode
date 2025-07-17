class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum =0;
        int lfsum=0;
        for(int i=0;i < nums.size();i++){
            sum+=nums[i];
        }
        for(int i =0; i < nums.size();i++){
            int rightsum=sum-lfsum-nums[i];
            if(lfsum==rightsum)return i;
            lfsum+=nums[i];
        }
        return -1;
    }
};