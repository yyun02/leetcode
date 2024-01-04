class Solution:
    def isHappy(self, n: int) -> bool:

        myset = {n}
        tem = n
        
        while True:

            if tem==1:
                return True

            if tem==0:
                return False

            count = len(str(tem))
            num = 0
            for i in range (count-1, 0, -1):
                print("IN FOR LOOP")
                num += int(pow (int(tem/pow(10, i))%10,2))
                print ("num is ", num)

            num += int(pow((tem%10), 2))

            print(num, n, tem)

            set_count = len(myset)
            myset.add(num)

            if set_count == len(myset):
                return False

            tem = num

        