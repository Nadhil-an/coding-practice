# //leetcode pallindrome

class Solution:
    def Pallindrome(self,int x):
        if x<0:
            False
        if x == 0:
            True

        if x%10 == 0:
            False
        
        originalx=x
        revNumber = 0
        while x>0:
            lastdigit = x %10
            revNumber = revNumber *10 + lastdigit
            x = x//10
        
        return originalx == revNumber
