int student(vector<int> &arr,int pages){
    int stud=1;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        if((arr[i]+sum)<=pages){
            sum+=arr[i];
        }
        else{
            sum=arr[i];
            stud++;
        }
    }
    return stud;
}

int findPages(vector<int>& arr, int n, int m) {
    if(m>n) return -1;
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        int students=student(arr,mid);
        if(students<=m){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
