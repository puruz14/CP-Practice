#include<bits/stdc++.h>
using namespace std;

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        long long n,l;
        double m=0;
        cin>>n>>l;
        double a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=1;i<n;i++){
            m=max(m,(a[i]-a[i-1])/2);
        }
        m=max(m,a[0]-0);
        m=max(m,l-a[n-1]);
        cout<<setprecision(10)<<fixed<<m<<endl;
    // }
    return 0;
}