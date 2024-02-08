//https://leetcode.com/problems/perfect-squares/solutions/4694883/beats-99-users-c-java-python-javascript-explained/?envType=daily-question&envId=2024-02-08

class Solution {
public:
    int numSquares(int n) {
        std::vector<int> dp(n + 1, INT_MAX);  // Initialize a vector dp with size n + 1, all elements set to INT_MAX
        dp[0] = 0;  // The base case: it takes 0 perfect squares to sum up to 0

        for (int i = 1; i <= n; ++i) {
            int min_val = INT_MAX;  // Initialize the minimum value for the current number i
            for (int j = 1; j * j <= i; ++j) {
                // Update the minimum value based on previously calculated values
                min_val = std::min(min_val, dp[i - j * j] + 1);
                //cout << i << "   j: " << j << "    min: " << min_val << endl;
            }
            dp[i] = min_val;  // Store the minimum number of perfect squares for the current number i
        }		
        return dp[n];  // The result is the minimum number of perfect squares needed to sum up to n
    }
};
