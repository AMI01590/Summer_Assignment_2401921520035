class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double l=0,a=0,res=0;
        for(l=0;l<k;l++){
            a+=nums[l];
        }
            res=a;
        for(l=k;l<nums.size();l++){
            a+=nums[l];
            a-=nums[l-k];
            res=max(res,a);
        }
        
        return res/k;
    }
};
