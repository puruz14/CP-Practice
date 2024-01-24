class Solution {
public:
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        int n=maxHeights.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            int prev=maxHeights[i];
            long long sum=maxHeights[i];
            for(int j=i-1;j>=0;j--){
                prev=min(maxHeights[j],prev);
                sum+=prev;
            }
            prev=maxHeights[i];
            for(int j=i+1;j<n;j++){
                prev=min(maxHeights[j],prev);
                sum+=prev;
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};
