class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
       vector<long long>prefix(nums.size());
        long long sum =0; 
        for(int i =0 ; i < nums.size(); i++){
            sum+=nums[i];
            prefix[i]=sum;
        }
        //[10,14,6,13] prefix sum
        int count =0;
        for(int i =0 ; i < prefix.size()-1; i++){
            long long lf = prefix[i];
            long long ri = sum - prefix[i];
            if(lf>=ri)count++;
        }
        return count;
    }
};