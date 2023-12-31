class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }

        if (x < 10){
            return true;
        }

        int length = 0;
        int tem = x;

        while(true){
            
            length ++;
            if ((tem/10)<1 || tem==1){
                break;
            } 
            tem= tem/10;
        }

        std::cout << length << std::endl;

        int last = 1;
        int first = std::pow(10,(length-1)); // ^ (to the power of)


        for (int k = 1; k <= length/2; k ++){

            std::cout << first << "    " << last << std::endl;
            std::cout << (x/first)%10 << "    " << (x % static_cast<int>(pow(10, k)))/last << std::endl;

            if ((x/first)%10 != (x % static_cast<int>(pow(10, k)))/last){
                return false;
            }
            last = last * 10;
            first = first / 10;
        }
        return true;
    }
};
