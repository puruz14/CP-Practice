#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,check=0;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==a[i-1]&&!check&&(i!=0)){
                check=1;
            }
        }
        if(check){
            cout<<0<<endl;
        }
        else{
            long long gcd1=a[0];
            long long gcd2=a[1];
            for(int i=2;i<n;i++){
                if(i%2){
                    gcd2=__gcd(gcd2,a[i]);
                }
                else{
                    gcd1=__gcd(gcd1,a[i]);
                }
            }
            bool p=1,q=1;
            for(int i=0;i<n;i++){
                if(i%2){
                    if(a[i]%gcd1==0){
                        q=0;
                    }
                }
                else{
                    if(a[i]%gcd2==0){
                        p=0;
                    }
                }
            }
            if(p){
                cout<<gcd2<<endl;
            }
            else if(q){
                cout<<gcd1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }

    }
    return 0;
}