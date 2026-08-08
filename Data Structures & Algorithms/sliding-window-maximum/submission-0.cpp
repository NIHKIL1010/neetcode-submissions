class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // if(nums.size()==0 || k==0){
        //     return {};
        // }
        int n =nums.size();
        vector<int> ans(n-k+1);
        deque<int>dq;
        
        for( int r=0; r<n; r++){
            while(!dq.empty() &&  nums[dq.back()] <= nums[r]){
                dq.pop_back();
            }
            dq.push_back(r);

            if(dq.front() <= r-k)
            dq.pop_front();
           
            if(r >= k - 1){
                ans[r- k + 1] = nums[dq.front()];
            }
        }
        return ans;
    }
};
