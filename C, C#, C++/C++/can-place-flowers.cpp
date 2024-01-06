class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        if (flowerbed.size()==1){
            if (flowerbed[0]==1 && n==1){
                return false;
            }
            else{
                return true;
            }
        }
        int count = 0;
        int res = 0;
        int i =0;
        
        for (i; i < flowerbed.size(); i++){
            if (flowerbed[i]==0){
                count++;
            }
            // 3, 1 - 5 ,2 -7 ,3 (minus 1 and /2)
            else{
                if (i ==0){
                    continue;
                }
                if (i==count){
                    if (count%2){
                        count--;
                    }
                    res += count/2;
                    count= 0;
                    continue;
                }
                else if (count%2==0){
                    count--;
                }
                res += (count-1)/2;
                cout << " res: " << res << endl;
                count =0;
            }
        }

        if(i==count){
            res += 1+(count-1)/2;
        }

        else if (count >0){
            cout << " end 0 " << endl;
            if (count%2){
                count--;
            }
            res += count/2;
        }

        cout << res << endl;

        if (res >= n){
            return true;
        }

        return false;
    }
};
