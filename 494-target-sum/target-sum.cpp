class Solution {
public:
    int helper(vector<int>&nums,int sum,int n){
        int dp[n+1][sum+1];
        for(int i =0 ; i <n+1 ;i++){
            dp[i][0]=1;
        }
         for(int i =1 ; i <sum+1 ;i++){
            dp[0][i]=0;
        }
        for(int i =1; i <=n ;i++){
            for(int j =0; j <=sum ;j++){
                if(nums[i-1]<=j){
                    dp[i][j]= dp[i-1][j]+ dp[i-1][j-nums[i-1]];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum=0;
        
        for(auto it:nums) sum+=it;
        if(target>sum) return 0;
        if (sum < abs(target) || (sum + target) % 2 != 0) return 0;
        int ans = (target+sum)/2;
      
        int result = helper(nums,ans,n);
        return result;
    }
};
