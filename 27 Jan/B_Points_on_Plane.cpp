#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int x=sqrt(n);
        if(x*x==n){
            cout<<x-1LL<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
}