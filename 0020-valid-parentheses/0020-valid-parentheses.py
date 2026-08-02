class Solution:
    def isValid(self, s: str) -> bool:
        stack=[]
        info={")":"(","]":"[","}":"{"}
        for c in s:
            if c in info:
                if stack and stack[-1]==info[c]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(c)
        return True if not stack else False
            