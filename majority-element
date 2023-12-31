class Solution {
public:
    int majorityElement(vector<int>& nums) {

        vector<int> uniq;

        if(nums.size() == 1){
            return nums[0];
        }
        
        int j = 0;
        int res = 0;

        //elements = nums;

        
        for (int i = 0; i < nums.size(); i++){
            if (count(uniq.begin(), uniq.end(), nums[i]) == 0){
                uniq.push_back(nums[i]);
                j++;
            }
        }

        int tem = 0;
        int result = 0;
        for (int i = 0; i < uniq.size(); i++){

            tem = count (nums.begin(),nums.end(), uniq[i]);

            if (tem > res){
                res = tem;
                result = i;
            }
        }

        return uniq[result];
    }
};
