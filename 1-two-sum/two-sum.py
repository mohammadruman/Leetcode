class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for i in range(len(nums)):
            hashmap[nums[i]]=i
        for i in range(len(nums)):
            compli = target - nums[i]
            if compli in hashmap and hashmap[compli]!=i:
                return [i, hashmap[compli]]
        return []