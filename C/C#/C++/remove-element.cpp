class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size();
        for (int i = 0; i < nums.size(); i++){
            if (nums.at(i)== val){
                nums.erase(nums.begin()+i);
                i--;
                k--;
            }
        }
        return k;
    }
};
