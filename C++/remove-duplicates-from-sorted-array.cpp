class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int> res (nums.begin(), nums.end());

        nums.assign(res.begin(), res.end());

        return res.size();

    }
};
