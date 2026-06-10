class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string m = s + s;
        return m.substr(1, m.size() - 2).find(s) != string::npos;

    }
};
