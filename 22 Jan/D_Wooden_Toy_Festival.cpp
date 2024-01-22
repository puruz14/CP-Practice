#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }    
        sort(a,a+n);
        long long lo = 0 ,hi=*max_element(a,a+n),ans=hi;
        while(lo<hi){
            long long mid=lo+(hi-lo)/2;
            int i=0,j=n-1;
            while(i+1<n&&a[i+1]-a[0]<=2*mid)i++;
            while(j-1>=0&&a[n-1]-a[j-1]<=2*mid)j--;
            i++;j--;
            if(i>j||a[j]-a[i]<=2*mid){
                ans=mid;
                hi=mid;         
            }else lo=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}