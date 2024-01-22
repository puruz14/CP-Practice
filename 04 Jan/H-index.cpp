class Solution {
public:
    int hIndex(vector<int>& citations) {
        int h,n=citations.size();
        sort(citations.begin(),citations.end());
        if(n==1){
            return !(citations[0]==0);
        }
        for(int i=0;i<n;i++){
            if(citations[i]>=(n-i)){
                h=n-i;
                return h;
            }
        }
        return 0;
    }
};
