class Solution {
public:
    set <array<int, 2>> numset;
    int count = 0;
    void Islands(vector<vector<char>>& grid, int i, int j){

        cout << count << " " << i<< " " << j << endl;

        if (i < grid.size()-1 && numset.count({i+1, j})==0){
            if (grid[i+1][j]== '1'){
                numset.insert({i+1, j});
                Islands(grid, i+1, j);
            }
        }

        if (i-1 >= 0 && numset.count({i-1, j})==0){
            if (grid[i-1][j]== '1'){
                numset.insert({i-1, j});
                Islands(grid, i-1, j);
            }
        }

        if (j < grid[i].size()-1 && numset.count({i, j+1})==0){
            if (grid[i][j+1]== '1'){
                numset.insert({i, j+1});
                Islands(grid, i, j+1);
            }
        }

        if (j-1 >= 0){
            if (grid[i][j-1]== '1' && numset.count({i, j-1})==0){
                numset.insert({i, j-1});
                Islands(grid, i, j-1);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {

        for (int i = 0; i < grid.size(); i++){
            for (int j=0; j < grid[i].size(); j++){

                if (grid[i][j]=='0'){
                    continue;
                }

                if (numset.count({i, j})){
                    continue;
                }

                numset.insert({i, j});
                Islands(grid, i, j);
                count ++;
            }
        }

        return count ;
        
    }
};
