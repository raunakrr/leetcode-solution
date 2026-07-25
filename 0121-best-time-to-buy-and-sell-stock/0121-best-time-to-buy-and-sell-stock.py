class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        l=0
        max_profit=0
        n=len(prices)
        for r in range(n):
            profit=prices[r]-prices[l]
            while profit<0 and l<r:
                l+=1
            else:
                max_profit=max(max_profit,profit)
        return max_profit