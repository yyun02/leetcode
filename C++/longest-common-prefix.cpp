class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    
        int minm_tem = 0;
        set <string> strings (strs.begin(), strs.end());
        vector <string> strs2;
        copy(strings.begin(), strings.end(), back_inserter(strs2));
        int minm = 200;
        int tem = 0;
        int change = 0;

        for (int k = 0; k < strs2.size(); k++){
            tem = strs2[k].length();
            minm = min(minm, tem);

            if ((k<strs2.size()-1) && strs2[k][0]!=strs2[k+1][0]){
                return "";
            }
        }

        cout << minm <<endl;
        minm_tem = minm;

        for (int j = 0; j < strings.size(); j++){
            cout <<"BEFORE ERASE"<< strs2[j] << endl;
            if (strs2[j].length() > minm){
                strs2[j].erase(strs2[j].begin()+minm, strs2[j].end());
            }
            change = 0;
            cout << strs2[j]<< " word " << j << endl;
            //cout << strs[j] << endl;
            for(int i = minm_tem-1; i >= 0; i--){
                cout << minm_tem << " " <<  strs2[j]<< " "<< i << endl;
                if (j ==0){
                    cout << "j is 0 " << endl;
                    break;
                }
                change ++;
                if (strs2[j][i] != strs2[0][i]){
                    minm = minm-1;
                    cout << "IN IF " << change << " " << minm_tem << " "<< minm <<  endl;
                    if ((minm_tem - minm) != change){
                        minm = minm_tem - change;
                        cout << change << " " << minm_tem << " " <<  minm << endl;
                    }
                }
                cout << i << endl;
            }
            minm_tem = minm;
        }

        strs2[0].erase(strs2[0].begin()+minm, strs2[0].end());

        std::cout << strs2[0]  <<" "<< minm << std::endl;
        return strs2[0];
        
    }
};
