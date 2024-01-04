class Solution {
public:
    int strStr(string haystack, string needle) {

        if (haystack == needle){
            return 0;
        }

        if(needle.length() > haystack.length()){
            return -1;
        }

        for(int i = 0; i < haystack.length()-needle.length()+1; i++){
            cout <<"i for " << i << " "<< haystack[i] << " " << needle[0] << endl;
            if (haystack[i] == needle[0]){
                if (needle.length() ==1){
                    return i;
                }
                
                for (int k = i+1; k < i+needle.length(); k++){
                    cout<< "k for " << i << " "<< haystack[k] << " " << needle[k-i] << endl;
                    if (haystack[k] != needle[k-i]){
                        break;
                    }
                    if (k == needle.length()+i-1){
                        return i;
                    }
                }
            }
        }
        return -1;
    }
};
