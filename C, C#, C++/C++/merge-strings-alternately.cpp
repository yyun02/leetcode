class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int count =1;
        for (int i = 0; i < word2.length(); i++){

            if (count < word1.length()){
                word1.insert(count, word2, i, 1);
            }

            else{
                word1.push_back(word2[i]);
            }
            count += 2;
            cout << word1 << endl;
        }
        // 0-1 1-3 2-5 
        return word1;
    }
};
