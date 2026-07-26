from collections import Counter
class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1)>len(s2):
            return False
        need=Counter(s1)
        l=0
        count=Counter()
        for r in range(len(s1)-1,len(s2)):
            count=Counter(s2[l:r+1])
            if count==need:
                return True
            l+=1
        if count==need:
            return True
        return False