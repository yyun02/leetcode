class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        int tem = 0;
        for (int i = 0; i < words.size(); i++){
            if (words[i].length()==1){
                return words[i];
            }
            
            for (int j = 0; j < floor(words[i].length()/2); j++){
                if (words[i][j] != words[i][words[i].length()-1-j]){
                    tem = 0;
                    break;
                }

                tem = 1;
            }

            if (tem==1){
                return words[i];
            }
        }
        return "";
    }
};
