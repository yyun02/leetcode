class Node{
    int res = 0;
    int lat = 0;
}

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        new Node 

        int sum = 0;
        int res = 0;

        if (nums.size() == 1){
            return nums.front();
        }

        int i = 0;
        while (nums.at(i)< 0 || nums.at(i)==0){
            i++;

            if (i == nums.size()){

                int p = 1;
                int neg = nums.at(0);
                while (p < nums.size()){
                    if (neg < nums.at(p)){
                        neg = nums.at(p);
                    }
                    p++;
                }
                return neg;
            }
        }

        int k = nums.size()-1;

        while (nums.at(k)<0 || nums.at(i)==0){
            k--;
        }

        int tem = 0;
        int pos = 0;
        int lat = 0;
        int later = 0;

        while(i <= k){

            while ((nums.at(i) > 0 || nums.at(i)==0)){
                sum += nums.at(i);
                //std::cout << pos << "  " << i<< std::endl;
                i++;
                if (i > k){
                    break;
                }
                pos = sum;
            }

            while ( i<=k && (nums.at(i) < 0 || nums.at(i)==0)){
                sum += nums.at(i);
                //std::cout << neg << "  " << i<< std::endl;
                i++;
                if (i > k){
                    break;
                }
            }

            if (i <= k){
                int p = i;

                while ((nums.at(p) > 0 || nums.at(p)==0)){
                    //std::cout << pos << "  " << i<< std::endl;
                    sum += nums.at(p);
                    lat += nums.at(p);
                    p++;
                    if (p > k){
                        break;
                    }
                }
            }


            //tem = prev sum
            //sum = curr sum
            //pos = curr pos
            //lat = prev later pos

            res = max (res, sum);
            res = max (res, sum+tem-later);
            res = max(res, pos);
            res = max(res, tem);
            res = max(res, lat);
            std::cout << res << " " << sum << " "<< pos << " " << tem << " " << later << " " << sum+tem-later << "   SUM " << i<< std::endl;
            tem = sum;
            later = lat; 
            sum = 0; 
            pos = 0; 
            lat = 0;  

            if (i == k){
                return res;
            }
        }

        return res;
    }
};
