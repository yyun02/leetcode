class Solution {
public:
    string reversePrefix(string word, char ch) {

        string res = "";
        
        for (int i =0 ; i < word.size(); i++){
            res.insert(res.begin(), word[i]);
            if (word[i] == ch){
                if (word.size() ==res.size()){
                    return res;
                }
                break;
            }
        }

        if (word.size() ==res.size()){
                return word;
            }

        word.erase(0, res.size());
        res.insert(res.size(), word);

        return res;
    }
};
