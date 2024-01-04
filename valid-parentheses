class Solution {
public:
    bool isValid(string s) {

        if (s.length() %2 == 1){
            return false;
        }

        unordered_map <char, int> map;
        
        map['['] = 1;
        map[']'] = -1;
        map['('] = 2;
        map[')'] = -2;
        map['{'] = 3;
        map['}'] = -3;

        int count = 0;
        vector <int> open;

        for (int i = 0; i < s.length(); i++){
            count += map[s[i]];

            if (count < 0){
                return false;
            }

            if( map[s[i]] > 0){
                open.push_back(map[s[i]]);
            }

            else{
                if (open.back() != abs(map[s[i]])){
                    return false;
                }
                open.pop_back();
            }

        }

        if (count == 0){
            return true;
        }

        return false;
    }
};
