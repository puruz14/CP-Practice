class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m=INT_MAX,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<m){
                m=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            ans+=(nums[i]-m);
        }
        return ans;
    }
};
