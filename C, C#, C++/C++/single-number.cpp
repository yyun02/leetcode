class Solution {
public:
    int singleNumber(vector<int>& nums) {

        if (nums.size() == 1){
            return nums[0];
        }

        set <int> hello;

        for (int i =0; i < nums.size(); i++){

            if (hello.count(nums[i]) ==1){
                hello.erase(nums[i]);
                continue;
            }

            hello.insert(nums[i]);
        }

        return *(hello.begin());
    }
};



