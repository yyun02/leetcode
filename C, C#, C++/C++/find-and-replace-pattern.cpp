class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

        if (words[0].size()==1){
            vector<string> res (words.begin(), words.end());  
            return res;
        }

        vector<string> res;
        set <char> set;

        unordered_map<char, char> map;
        for (int i = 0; i < words.size(); i++){
            for (int j = 0; j < pattern.length(); j++){
                if (map.find(pattern[j]) == map.end()){
                    if (set.count(words[i][j])){
                        cout << words[i] << "  set count"<< endl;
                        break;
                    }
                    map[pattern[j]] = words[i][j];
                    set.insert(words[i][j]);
                }

                if (map[pattern[j]] != words[i][j]){
                    break;
                }

                if (j == pattern.length()-1){
                    res.push_back(words[i]);
                }
            }
            map.clear();
            set.clear();
        }

        return res;
    }
};
