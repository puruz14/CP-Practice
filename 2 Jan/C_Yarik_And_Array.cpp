#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=INT_MIN,sum=0;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(a[n-1]&1){
            a[n]=0;
        }
        else{
            a[n]=1;
        }
        for(int i=0;i<n;i++){
            sum+=a[i];
            ans=max(ans,sum);
            if((a[i]%2==0&&a[i+1]%2==0)||(a[i]%2!=0&&a[i+1]%2!=0)||sum<0){
                sum=0;
            }
        }
        cout<<ans<<endl;
    }
}
