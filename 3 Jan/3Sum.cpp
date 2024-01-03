class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int j,k,sum;
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            j=i+1;
            k=nums.size()-1;
            if(nums[i]>0){
                break;
            }
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        for(auto triplets : s){
            ans.push_back(triplets);
        }    
        return ans;
    }
};
