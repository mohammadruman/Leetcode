class Solution {
public:
    int lastoccurence(vector<int>&nums,int target){
         int res =-1;
        int l =0; int h = nums.size()-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(nums[mid]==target){
                res=mid;
                l=mid+1;
            }
            else if(nums[mid]>target){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return res;
    }
    int firstoccurence(vector<int>&nums,int target){
         int res =-1;
        int l =0; int h = nums.size()-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(nums[mid]==target){
                res=mid;
                h=mid-1;
            }
            else if(nums[mid]>target){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       int firsocc= firstoccurence(nums,target);
       int lastocc = lastoccurence(nums,target);
       return {firsocc,lastocc};
    }
};