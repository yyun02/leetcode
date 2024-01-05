//referred https://leetcode.com/problems/search-insert-position/solutions/3409777/easy-and-simple-c-approach-binary-search/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int min = 0;
        int max = nums.size()-1;
        int mid = nums.size()/2;

        if (target < nums[min]){
            return 0;
        }

        if (target > nums[max]){
            return nums.size();
        }

        while (nums[min] <= nums[max]){
            if (target == nums[mid]){
                return mid;
            }

            else if (target > nums[mid]){
                min = mid+1;

                if (target < nums[mid+1]){
                    return mid+1;
                }
            }

            else {
                max = mid-1;

                if (target > nums[mid-1]){
                    return mid;
                }
            }

            mid = (min+max)/2;
        }

        return min;
    }
};
