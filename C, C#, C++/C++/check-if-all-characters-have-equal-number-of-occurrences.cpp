//https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/solutions/3175785/c-easy-to-understand/
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int>mp;
        for(const auto& i : s) mp[i]++;

        int prev = mp[s[0]];

        for(const auto& i : mp) {
            if (i.second != prev) return false;
            prev = i.second;
        }

        return true;
    }
};

/*
1. map<char, int> mp;: This line declares a map named mp where the keys are characters (char) and the values are integers (int). This map is used to store the count of occurrences of each character in the input string.

2. for(const auto& i : s) mp[i]++;: This loop iterates through each character in the string s and increments the corresponding count in the map mp.

3. int prev = mp[s[0]];: Initializes a variable prev with the count of occurrences of the first character in the string s. This will be used as a reference count for comparison in the next loop.

4. for(const auto& i : mp) { if (i.second != prev) return false; prev = i.second; }: This loop iterates through the map and compares the count of occurrences of each character with the reference count prev. If any count is different, the function returns false, indicating that the occurrences are not equal. Otherwise, it updates prev with the current count.

5. return true;: If the loop completes without returning false, it means that the occurrences of all characters are equal, and the function returns true.
*/
