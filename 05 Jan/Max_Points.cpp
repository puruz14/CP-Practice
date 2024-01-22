class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        int ans=1;
        for(int i=0;i<n;i++){
            int x1=points[i][0];
            int y1=points[i][1];
            for(int j=i+1;j<n;j++){
                int x2=points[j][0];
                int y2=points[j][1];
                int temp=0;
                for(int k=0;k<n;k++){
                    int x=points[k][0];
                    int y=points[k][1];
                    if(((y-y1)*(x2-x1))==((y2-y1)*(x-x1))){
                        temp++;
                    }
                }
                ans=max(ans,temp);
            }
        }
        return ans;
    }
};
