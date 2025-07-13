class Solution:
    def firstOccurence(self, nums:List[int],target:int)-> int:
        left =0
        right =len(nums)-1
        index =-1
        while(left<=right):
            mid = left + (right - left) // 2
            if(nums[mid]==target):
                index = mid
            if(nums[mid]>=target):
                right = mid-1
            else:
                left = mid+1
        return index     

    def lastOccurence(self, nums:List[int],target:int)-> int:
        left =0
        right =len(nums)-1
        index = -1
        while(left<=right):
            mid = left + (right - left) // 2
            if(nums[mid]==target):
                index = mid
            if(nums[mid]<=target):
                left = mid+1
            else:
                right = mid-1
        return index
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        first = self.firstOccurence(nums,target)
        last = self.lastOccurence(nums,target)
        return [first,last]
        