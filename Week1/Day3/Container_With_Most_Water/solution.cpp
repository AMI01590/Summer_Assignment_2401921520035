class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1,max_a=0;
        int hm,w;
        while(l<r){
                hm=min(height[l],height[r]);
                w=r-l;
                max_a=max(max_a,hm*w);
                if(height[l]<height[r]) l++;
                else{
                    r--;
                }
            
        }
        return max_a;
        
    }
};
