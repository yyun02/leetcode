class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        int output = 0;
        vector<int> res;

        for (int i =0; i< operations.size(); i++){
            if (operations[i]=="D"){
                cout << "in D" << endl;
                output += res.back()*2;
                res.push_back(res.back()*2);
            }
            else if (operations[i]=="C"){
                cout << "in C" << endl;
                output -= res.back();
                res.pop_back();
            }
            else if (operations[i]=="+"){
                cout << "in +" << endl;
                output += res[res.size()-1] + res[res.size()-2];
                res.push_back(res[res.size()-1] + res[res.size()-2]);
            }
            else{
                res.push_back(stoi(operations[i]));
                cout << "in else  " << res.back() <<  endl;
                output += res.back();
            }
        }

        cout << "output  " << output << endl;
        return output;
    }
};
