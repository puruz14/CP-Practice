#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int sum=0,ans=0;
    for(int i=0;i<n;i++){
        if(sum<=a[i]){
            ans++;
            sum+=a[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}