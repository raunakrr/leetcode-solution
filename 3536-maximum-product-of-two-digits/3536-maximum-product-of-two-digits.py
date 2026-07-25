class Solution(object):
    def maxProduct(self, n):
        """
        :type n: int
        :rtype: int
        """
        maxi=0
        inp=str(n)
        for i in range(len(inp)):
            for j in range(i+1,len(inp)):
                prod=int(inp[i])*int(inp[j])
                maxi=max(maxi,prod)   

        return maxi


