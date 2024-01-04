void AddOne(vector<int>& digits, int i){

    if (i ==-1){
        digits.insert (digits.begin(), 1);
    }

    else if (digits[i] +1 > 9){
        digits[i] = (digits[i]+1) % 10;
        AddOne (digits, i-1);
    }

    else{
        digits[i] = digits[i] +1;
    }
}

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        AddOne (digits, digits.size()-1);
        return digits;
    }
};
