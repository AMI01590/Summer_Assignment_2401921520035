class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> d;
        vector<int> a;

        for (int i = 0; i < nums.size(); i++) {
            while (!d.empty() && d.front() <= i - k)
                d.pop_front();
            while (!d.empty() && nums[i] >= nums[d.back()])
                d.pop_back();

            d.push_back(i);
            if (i >= k - 1)
                a.push_back(nums[d.front()]);
        }

        return a;
        
    }
};
