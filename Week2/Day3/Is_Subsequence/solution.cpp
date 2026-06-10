class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.size();//3
        int n=t.size();//6
        if(m>n) return false;
        int i=0,j=0;
        while(i<m && j<n){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        return i==m;
    }
};
