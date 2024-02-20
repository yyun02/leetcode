class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        set <int> set1;
        set <int> set2;
        set <int, greater<int>> set;

        int res = 0;

        for (int i=0; i < arr1.size(); i++){
            if (set1.count(arr1[i])){
                continue;
            }
            set1.insert(arr1[i]);
            for (int j =0; j< arr2.size(); j++){
                set2.insert(arr2[j]);
                if (set2.count(arr1[i]) && set1.count(arr2[j])){
                    continue;
                }
                int tem_i = arr1[i], tem_j = arr2[j];
                int len_i = to_string(arr1[i]).length(), len_j = to_string(arr2[j]).length();
                cout << "tem before : "<< tem_i << " " << tem_j << endl;
                cout << "len : " << len_i << " " << len_j << endl;

                if (len_i != len_j){
                    arr1[i]>arr2[j] ? tem_i = floor(tem_i/pow(10, len_i-len_j)) : tem_j = floor(tem_j/pow(10, len_j-len_i));
                }
                cout << "tem : "<< tem_i << " " << tem_j << endl;

                while (tem_i != tem_j){
                    tem_i = floor(tem_i/10);
                    tem_j = floor(tem_j/10);

                    //cout << tem_i << " " << tem_j << endl;
                }
                set.insert(tem_i);
            }
        }
        if (*set.begin() ==0){
            return 0;
        }
        return to_string(*set.begin()).length();
    }
};
