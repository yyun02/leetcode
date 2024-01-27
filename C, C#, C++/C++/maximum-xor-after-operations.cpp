//https://leetcode.com/problems/maximum-xor-after-operations/

class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int ans = 0;
        for(auto i : nums)
        {
            ans |= i;
        }
        return ans;
    }
};
/*
0000
0011 0011
0010 0011
0100 0111
0110 0111*/
