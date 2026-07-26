from collections import Counter
class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1)>len(s2):
            return False
        need=Counter()
        count=Counter()
        l=0
        for i in s1:
            need[i]=1+need.get(i,0)
        for r in range(len(s1)):
            count[s2[r]]=1+count.get(s2[r],0)
        for r in range(len(s1),len(s2)):
            if count==need:
                return True
            
            count[s2[r]]=1+count.get(s2[r],0)
            count[s2[l]]-=1
            l+=1
        if count==need:
            return True
        return False