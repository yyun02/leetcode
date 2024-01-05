/*
class Solution {
public:
    int mySqrt(int x) {
        return sqrt(x);
    }
};
*/

class Solution {
public:
    int mySqrt(int x) {

        int i = 0;

        if (x>=100){
            int num = log10(x);
            i = pow(10, (num)/2);
        }

        //10 100
        //100 10000 
        //1000 1000000


        while(true){
            if (pow(i, 2)<= x && pow(i+1, 2)>x){
                return i;
            }

            i ++;
        }
    }
};
