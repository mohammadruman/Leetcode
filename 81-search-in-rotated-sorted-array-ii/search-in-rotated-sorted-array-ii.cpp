class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0;
        int h= nums.size()-1;
        while(l<=h){
            int mid = l+ (h-l) /2;
            if(nums[mid]== target) return true;
            //if it contains dublicate then 
            if(nums[l]==nums[mid] && nums[mid]== nums[h]){
                l++;
                h--;
              continue;
            }
            //check if left part is sorted
             if(nums[l]<=nums[mid]){
                if(nums[l]<=target && target <= nums[mid]){
                    h = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            //if left part is not sorted then definetely right part is sorted
            else{
                if(nums[mid]<=target && target <= nums[h]){
                    l = mid+1;
                }
                else{
                    h = mid-1;
                }
            }
        }
        return false;
    }
};