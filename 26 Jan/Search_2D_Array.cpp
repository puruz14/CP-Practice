class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int start=0;
        int end=(row*col)-1;
        int mid;
        while(start<=end){
            mid=(start+end)/2;
            int x=matrix[mid/col][mid%col];
            if(x==target){
                return true;
            }
            else if(x<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};
