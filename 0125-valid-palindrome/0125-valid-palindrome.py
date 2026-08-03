class Solution:
    def isPalindrome(self, s: str) -> bool:
        word=s.lower()
        word2=""
        for i in word:
            if i.isalnum():
                word2=word2+i
        if word2==word2[::-1]:
            return True
        else:
            return False