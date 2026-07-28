from collections import Counter
class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if len(t)>len(s):
            return "" 
        l=0
        res=""
        minn=float("inf")
        sub=Counter(t)
        wind=Counter()
        for r in range(len(s)):
            wind.update(s[r])
            w=(r-l)+1
            if sub<=wind:
                if minn>=w:
                    res=s[l:r+1]
                minn=min(minn,w)
                
            while sub<=wind:
                wind[s[l]]-=1
                l+=1
                w=r-l+1
                if w<minn:
                    minn=w
                    res=s[l-1:r+1]
                
                
        if minn==float("inf"):
            return ""
        return res


            