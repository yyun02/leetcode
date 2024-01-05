class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        
        if n==1:
            return True

        if n== 0 or n%2 ==1 n%10==0:
            return False

        while n != 1:
            n = n/2
            if not n.is_integer():
                return False

        return True

#Follow up: Could you solve it without loops/recursion?

class Solution:
    def isPowerOfTwo(self, n: int) -> bool:

        return n > 0 and (n & (n - 1)) == 0 #GPT
