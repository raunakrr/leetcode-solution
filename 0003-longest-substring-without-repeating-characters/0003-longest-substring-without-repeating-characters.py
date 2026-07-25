class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        l=0
        sett=set()
        n=len(s)
        longest=0
        
        for r in range(n):
            
            while s[r] in sett:
                sett.remove(s[l])
                l+=1
            count=(r-l)+1
            longest=max(longest,count)
            sett.add(s[r])

        return longest
