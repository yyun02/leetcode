class Solution {
public:
    string addBinary(string a, string b) {

        //cout << a[0] << " " << a[0]-48 << endl;

        int len = min(a.length(), b.length());
        string d = (a.length() >= b.length()) ? a : b;

        string c = "";
        int bit = 0;

        for (int i = 0; i < len; i++){
        cout << " c = " << "\"" << c << "\"" << endl;
        cout << " a = " << a[a.length()-1-i]-48 << " b = " << b[b.length()-1-i]-48 << " bit = " << bit << endl;

            if ((a[a.length()-1-i]-48) ^ (b[b.length()-1-i]-48) ^ bit){ // 3 1's, 1 1's

                cout << "XOR "<< endl;
                c.insert(c.begin(), '1');

                if ((a[a.length()-1-i]-48) && (b[b.length()-1-i]-48) && bit){
                    cout << "3 1's" << endl;
                    bit = 1;
                }
                else {
                    bit = 0;
                }
                continue;
            }

            c.insert(c.begin(), '0');

            // 0 1's
            if ((a[a.length()-1-i]-48)==0 && (b[b.length()-1-i]-48)==0 && bit==0){
                cout << "0 1's" << endl;
                bit = 0;
            }

            // 2 1's
            else {
                cout << "2 1's" << endl;
                bit = 1;
            }
        }

        cout << "passed first for loop" << endl;

        int i = a.length()-b.length();

        for (i = abs(i)-1; i >= 0; i --){
            if (d[i]-48 ^ bit){ // 1 1's
                cout << "1 1's" << endl;
                c.insert(c.begin(), '1');
                bit = 0;

                continue;
            }

            // 2 1's
            if ((d[i]-48) && bit){
                cout << "2 1's" << endl;
                bit = 1;
            }

            // 0 1's
            else{
                bit = 0;
            }
            c.insert(c.begin(), '0');
        }

        if (bit == 1){
                cout << "bit is 1 " << endl;
            c.insert(c.begin(), '1');
        }

        return c;
    }
};
