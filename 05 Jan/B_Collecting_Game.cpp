#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,sum=0;
        cin>>n;
        long long s[n],k=0;
        pair<int,int> a[n],ans[n];
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i;
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            s[i]=sum;
            sum+=a[i].first;
        }
        for(int i=n-1;i>=0;i--){
            ans[i].first=a[i].second;
            ans[i].second=i+k;
            if(s[i]>=a[i].first){
                k++;
            }
            else{
                k=0;
            }
        }
        sort(ans,ans+n);
        for(int i=0;i<n;i++){
            cout<<ans[i].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}