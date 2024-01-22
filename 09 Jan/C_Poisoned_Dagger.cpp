#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,h;
        cin>>n>>h;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long low=1,high=1e18;
        while(low<=high){
            long long mid=(low+high)/2;
            long long sum=mid;
            for(int i=0;i<n-1;i++){
                sum+=min(mid,(a[i+1]-a[i]));
            }
            if(sum<h) low=mid+1;
            else high=mid-1;
        }
        cout<<low<<endl;
    }
    return 0;
}