#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll v[n];
        ll mx=INT_MIN,mn=INT_MAX,cnt=0;
        for(ll i=0; i<n; i++){
            if(s[i]=='1'){
                cnt++;
            }
            mx=max(mx,cnt);
            mn=min(mn,cnt);
            v[i]=cnt;
            if(s[i]=='0'){
                cnt--;
            }
        }
        cout<<mx-mn+1<<endl;
        for(ll i=0; i<n; i++){
            cout<<v[i]-mn+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}