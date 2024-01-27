class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int sum = 0;
        int cap = capacity;

        for (int i = 0; i < plants.size(); i ++){
            if (cap < plants[i]){
                sum += 2*i+1; // i(to river) +(i+1) 
                cap = capacity;
            }

            else {
                sum+=1;
            }

            cap -= plants[i];

            cout << sum << endl;
            
        }

        return sum;
        
    }
};
