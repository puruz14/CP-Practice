#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        c+=abs(a-b);
        if(a>b){
            a=b;
        }
        else{
            b=a;
        }
        int ans=min({a,b,c});
        a-=ans;
        b-=ans;
        ans+=(a+b)/3;
        cout<<ans<<endl;
    }
    return 0;
}