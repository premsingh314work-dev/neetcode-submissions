class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        data= set(nums)
        if len(data) == len(nums):
            return False
        else:
            return True     