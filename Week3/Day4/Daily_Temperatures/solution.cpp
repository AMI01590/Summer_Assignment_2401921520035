class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> a(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int idx=st.top();
                st.pop();
                a[idx]=i-idx;
           }
           st.push(i);
        }
        
    return a;
        
    }
};
