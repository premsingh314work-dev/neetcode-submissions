class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap={}
        for index,num in enumerate(nums):
                difference=target-num
                if (difference not in hashMap):
                        hashMap.update({num : index })
                        print(hashMap)
                else:
                        print(hashMap)
                        return [hashMap[difference], index]