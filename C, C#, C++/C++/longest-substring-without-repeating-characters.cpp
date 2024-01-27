class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if (s.size()==0 || s.size()==1){
            return s.size();
        }

        int count = 0;
        int tem =0;
        set <char> s_set;

        for(int i = 0; i < s.size(); i++){
            
            if (s_set.count(s[i])){
                tem = max (tem, count);
                count =0;
                s_set.clear();
            }

            count ++;
            s_set.insert(s[i]);
        }
        tem = max (tem, count);

        return tem;
        
    }
};
