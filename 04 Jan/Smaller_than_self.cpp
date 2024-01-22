class Solution {
public:
    vector<int> ans;
    void merge(vector<pair<int,int>>& a,int low,int mid,int high){
        vector<pair<int,int>> temp;   
        int left=low;
        int right=mid+1;
        int k=0;
        while(left<=mid&&right<=high){
            if(a[left].first>a[right].first){
                k++;
                temp.push_back(a[right]);
                right++;
            }
            else{
                temp.push_back(a[left]);
                ans[a[left].second]+=k;
                left++;
            }
        }
        while(left<=mid){
            ans[a[left].second]+=k;
            temp.push_back(a[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(a[right]);
            right++;
        }
        for(int i=0;i<temp.size();i++){
            a[low+i]=temp[i];
        }
    }
    
    void mergesort(vector<pair<int,int>> &a,int low,int high){
        if(low>=high) return;
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }

    vector<int> countSmaller(vector<int>& nums) {
        vector<pair<int,int>> a;
        for(int i=0;i<nums.size();i++){
            a.push_back({nums[i],i});
        }
        ans.resize(nums.size(),0);
        mergesort(a,0,nums.size()-1);
        return ans;
    }
};
