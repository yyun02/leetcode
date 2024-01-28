class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<vector<int>> list;
        int res =0, step=0;
        for (int i = lo; i <= hi; i++){
            res = i;
            step = 0;
            while (res !=1){
                if (res%2){
                    res = 3*res+1;
                }
                else{
                    res/=2;
                }
                step+=1;
            }
            list.push_back({step, i});
            cout << i << " " << step << endl;
        }
        sort(list.begin(), list.end());
        return list[k-1][1];
    }
};
