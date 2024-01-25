class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size(),ans=0;
        int lsmall[n],rsmall[n];
        stack<int> s1,s2;
        s1.push(0);
        lsmall[0]=0;
        for(int i=1;i<n;i++){
            while(!s1.empty() && heights[s1.top()]>=heights[i]){
                s1.pop();
            }
            if(s1.empty()) lsmall[i]=0;
            else lsmall[i]=s1.top()+1;
            s1.push(i);
        }

        s2.push(n-1);
        rsmall[n-1]=n-1;
        for(int i=n-2;i>=0;i--){
            while(!s2.empty() && heights[s2.top()]>=heights[i]){
                s2.pop();
            }
            if(s2.empty()) rsmall[i]=n-1;
            else rsmall[i]=s2.top()-1;
            s2.push(i);
        }
        for(int i=0;i<n;i++){
            ans=max(ans,heights[i]*(rsmall[i]-lsmall[i]+1));
        }
        return ans;
    }
};
