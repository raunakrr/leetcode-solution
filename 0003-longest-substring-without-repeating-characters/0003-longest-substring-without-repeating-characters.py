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
        count=0
        for r in range(n):
            
            while s[r] in sett:
                sett.remove(s[l])
                l+=1
                count-=1
            sett.add(s[r])
            count+=1
            longest=max(longest,count)
        return longest
