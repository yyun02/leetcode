class Solution {
public:
    bool detectCapitalUse(string word) {

        int num =0;
        int fir = 0;

        for (int i =0; i < word.size(); i++){
            
            cout << int(word[i]) << endl;
            if (word[i] < 97){  
                if (i ==0){
                    fir =1;
                }  
                if (num >0 && num!= i && i > 1){
                    return false;
                }
                num++;
                continue;
            }
            if (i >1 && num >1){
                return false;
            }
        }
        cout <<"num "<< num << endl;

        if (num == word.size() || num ==0 || fir ==1){
            return true;
        }
        return false;
        
    }
};
