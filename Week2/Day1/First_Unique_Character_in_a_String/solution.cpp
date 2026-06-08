class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0); // frequency of each lowercase letter

        // Step 1: Count frequency
        for (char c : s) {
            freq[c - 'a']++;
        }

        // Step 2: Find first character with count 1
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1; // no non-repeating character
    }
};
