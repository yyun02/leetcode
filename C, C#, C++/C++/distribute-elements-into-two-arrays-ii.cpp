class Solution {
public:

    int greaterCount(vector<int> arr, int val){
        vector<int> tem (arr);
        sort(tem.begin(), tem.end()); 
        int first = 0, last = tem.size()-1, mid = 0;
        if (tem[first]> val){
            cout << "first" << endl;
            return tem.size();
        }
        if (tem[last]< val){
            cout << "sec " << tem[last] << endl;
            return 0;
        }
        
        while (first <= last){
            mid = (first+last)/2;
            
            if (tem[mid] == val){
                cout << "th" << endl;
                return tem.size()-1 -mid;
            }
            if (last-mid==1 && tem[mid]<val && tem[last]>val){
                cout << "fo" << endl;
                return tem.size()-1 -mid;
            }
            if (mid-first==1 && tem[first]<val && tem[mid]>val){
                cout << "fo2" << endl;
                return tem.size()-1 -first;
            }
            if (tem[mid] > val){
                last = mid-1;
            }
            else{
                first = mid+1;
            }
        }
        return -1;
    }
    vector<int> resultArray(vector<int>& nums) {
        //cout << greaterCount(nums, 2)<< endl;
        vector<int> arr1 {nums[0]}, arr2 {nums[1]};
        for(int i =2; i < nums.size(); i++){
            cout << "Count : " << greaterCount(arr1, nums[i]) << "  " << greaterCount(arr2, nums[i]) << endl;
            if (greaterCount(arr1, nums[i]) > greaterCount(arr2, nums[i])){
                arr1.push_back(nums[i]);
            }
            else if (greaterCount(arr1, nums[i]) < greaterCount(arr2, nums[i])){
                arr2.push_back(nums[i]);
            }
            else{
                if (arr2.size() < arr1.size()){
                    arr2.push_back(nums[i]);
                }
                else{
                    arr1.push_back(nums[i]);
                }
            }

            cout <<  "num[i] " << nums[i] << "  arr1 " << arr1.size() << "  arr2 " << arr2.size() << endl;
        }
        vector<int> res (arr1);
        res.insert( res.end(), arr2.begin(), arr2.end() );

        return res;
    }
};
