class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};

//https://leetcode.com/problems/contains-duplicate/solutions/3672475/4-method-s-c-java-python-beginner-friendly/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //sort(nums.begin(), nums.end());
        unordered_set<int> seen;
        for (int num : nums) { // num takes elements in nums
            if (seen.count(num) > 0){ // if it is already in the set
                return true;
            }
            seen.insert(num);
        }
        return false;
    }


};

//https://leetcode.com/problems/contains-duplicate/solutions/3911679/c-1-line-solution-using-set/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(),nums.end()).size();
    }
};
