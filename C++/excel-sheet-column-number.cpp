/*
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(char c : columnTitle)
        {
			//d = s[i](char) - 'A' + 1 (we used  s[i] -  'A' to convert the letter to a number like it's going to be C)

            int d = c - 'A' + 1;
            result = result * 26 + d;
        }
        return result;
    }
};


*/


class Solution {
public:
    int titleToNumber(string columnTitle) {
        map <char, int> map;
        int k = 1;
        for (char i = 'A'; i <= 'Z'; i++){
            map[i] = k;
            k++;
            
        cout <<  map[i] << "  " ;
        }

        /*
        Z = 26
        AA = 26*1 + 1
        BC = 26*2 + 3
        ZY = 26*26 + 25 
        ABC = 26*26*1 + 26*2 +3
        */

        k =0;

        for (int i = 0; i < columnTitle.length(); i++){
        cout << columnTitle.length() << " " << map[columnTitle[i]] << endl;
            k += map[columnTitle[i]]*pow(26, (columnTitle.length()-1-i));
        }


        return k;
    }
};
