#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            ans=__gcd(ans,(abs(x-i)));
        }    
        cout<<ans<<endl;
    }
    return 0;
}