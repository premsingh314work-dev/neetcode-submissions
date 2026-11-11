class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hashmap={}      
        for str in strs:
                sorted_str="".join(sorted(str))
                if sorted_str not in hashmap:
                        hashmap[sorted_str] = []
                hashmap[sorted_str].append(str)
        return list(hashmap.values())