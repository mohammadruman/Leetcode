class Solution:
    def possibleStringCount(self, word: str) -> int:
        n = len(word)
        for i in range(1,n):
            if(word[i]!=word[i-1]):
                n=n-1
        return n