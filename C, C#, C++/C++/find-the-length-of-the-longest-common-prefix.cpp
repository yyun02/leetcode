class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        set <int> set1;
        set <int> set2;
        set <int, greater<int>> set;

        string res = "0";

        for (int i=0; i < arr1.size(); i++){
            if (set1.count(arr1[i])){
                continue;
            }
            set1.insert(arr1[i]);
            for (int j =0; j< arr2.size(); j++){
                if (arr1[i]== arr2[j]){
                    set.insert(arr1[i]);
                    continue;
                }
                if (set2.count(arr1[i]) && set1.count(arr2[j])){
                    continue;
                }
                set2.insert(arr2[j]);

                string first = to_string(arr1[i]), sec = to_string(arr2[j]);
                //cout << " before while - first : " << first << " sec : " << sec << endl;
                while (first[0] == sec[0] && first.size()>0 && sec.size()>0){
                    res.push_back(first[0]);
                    //cout << "res : " << res << endl;
                    first.erase(0, 1);
                    sec.erase(0, 1);

                    //cout << "first : " << first << " sec : " << sec << endl;
                }
                set.insert(stoi(res));
                //cout << arr1[i] << " " << arr2[j] << " : " << res << endl;
                res ="0";
            }
        }
        if (set.empty() || *set.begin() ==0){
            return 0;
        }
        return to_string(*set.begin()).length();
    }
};
