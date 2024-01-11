#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,mx=INT_MIN;
        cin>>n>>k;
        pair<long long,long long> a[n];
        for(int i=0;i<(2*n);i++){
            if(i<n){
                cin>>a[i].second;
                mx=max(mx,a[i].second);
            }
            else{
                cin>>a[i-n].first;
            }
        }
        sort(a,a+n);
        long long check=0,power=k;
        for(int i=0;i<n;i++){
            if(power>=mx){
                check=1;
                break;
            }
            else if(k<=0){
                break;
            }
            else if(a[i].second>power){
                k-=a[i].first;
                power+=k;
                i--;
            }
        }
        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }    
    return 0;
}