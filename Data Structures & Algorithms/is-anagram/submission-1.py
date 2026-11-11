class Solution:
    def isAnagram(self,s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        dict_t={}
        for char in t:
            dict_t[char]=dict_t.get(char,0)+1
        for char in s:
            if char not in dict_t:
                return False
            dict_t[char] -= 1
            if dict_t[char] <0:
                 return False            

        return True
            











        