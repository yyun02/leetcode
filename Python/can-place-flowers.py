class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:

        if len(flowerbed)==1:
            if flowerbed[0]==1 and n==1:
                return False
            else:
                return True

        count = 0
        res = 0
        i =0
        
        for i in range(len(flowerbed)):
            if flowerbed[i]==0:
                count+=1
            
            # 3, 1 - 5 ,2 -7 ,3 (minus 1 and /2)
            else:
                if i==0:
                    continue
                
                if i==count:
                    if count%2:
                        count-=1
                    
                    res += count/2
                    count= 0
                    continue
                
                elif count%2==0:
                    count-=1
                
                res += (count-1)/2
            
                count =0
        
        i+=1
        if i ==count:
            res += 1+(count-1)/2

        elif count >0:
            print (count)
            if count%2:
                count-=1
            print (count)
            
            res += count/2


        print (res)
        if res >= n:
            return True

        return False
