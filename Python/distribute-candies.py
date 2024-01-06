class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        candy = set (candyType)
        if len(candy)>= len(candyType)/2:
            return int (len(candyType)/2)
        
        else:
            return int (len(candy))
        

        
        
