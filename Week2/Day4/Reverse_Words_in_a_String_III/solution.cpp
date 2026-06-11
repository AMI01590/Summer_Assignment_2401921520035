class Solution {
public:
    string reverseWords(string s) {
       int st=0;
       for(int e=0;e<=s.size();e++){
        if(s[e]==' '||e==s.size()){
            reverse(s.begin()+st,s.begin()+e);
            st=e+1;
        }
       }
       return s;
    }
};
