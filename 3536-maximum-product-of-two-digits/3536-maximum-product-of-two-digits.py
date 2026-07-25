from math import prod
class Solution:
    def maxProduct(self, n: int) -> int:
        return prod(sorted(map(int,str(n)))[-2:])