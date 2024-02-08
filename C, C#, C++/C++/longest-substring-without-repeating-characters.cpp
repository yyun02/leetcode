class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if (s.length()==0 || s.length()==1){
            return s.length();
        }

        unordered_set <char> set;
        int count =-1, sum =0;

        for (int i = 0; i < s.length(); i++){

            if (set.count(s[i])){ // if in set
                //cout << "sum : " << sum;
                while (set.count(s[i])){
                    count ++;
                    set.erase(s[count]);
                }
                //cout << "   i : " << i << "   count : " << count;
            }
            
            if (set.size() != i+1){
                sum = max(sum, i -count);
            }

            set.insert(s[i]);

            //cout << endl;
        }

        if (set.size() == s.length()){
            return s.length();
        }
        return sum;
    }
};
