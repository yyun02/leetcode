# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        if n==1:
            return 1
        
        front = 1
        back = n

        while front!=back:
            num = int ((front+back)/2)
            if isBadVersion (num): #if bad
                if isBadVersion (num-1) == False:
                    return num
                back = num-1

            else: #if good
                if isBadVersion (num+1):
                    return num+1
                front = num+1

        return back


        
