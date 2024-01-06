class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        set <int> candy (candyType.begin(), candyType.end())
        if candy.size()>= candyType.size()/2:
            return candyType.size()/2
        
        else:
            return candy.size()
        
