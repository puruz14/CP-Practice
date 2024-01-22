class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        vector<int> v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            while(!q.empty()&&nums[q.back()]<=nums[i]){
                q.pop_back();
            }
            q.push_back(i);
            if(q.front()==i-k){
                q.pop_front();
            }
            if(i+1>=k){
                v.push_back(nums[q.front()]);
            }
        }
        return v;
    }
};
