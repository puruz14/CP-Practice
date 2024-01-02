class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1;
        int max=0,ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                cnt=1;
            }
            else{
                cnt++;
            }
            if(cnt>max){
                max=cnt;
                ans=nums[i];
            }
        }
        return ans;
    }
};
