class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        set <int> first;
        set <int> sec;
        int res =0;
    
        for (int i =0; i< trust.size(); i++){
            first.insert(trust[i][0]);
        }

        for (int i =1; i<= n; i++){
            if (first.count(i)==0){
                res = i;
                break;
            }
        }

        for (int i =0; i< trust.size(); i++){
            if (trust[i][1]== res){
                sec.insert(trust[i][0]);
            }
        }

        if (sec.size() == n-1){
            return res;
        }

        
        return -1;
    }
};
