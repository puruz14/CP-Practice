#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(k==4){
            int c2=0,c4=0,check=0;
            for(int i=0;i<n;i++){
                if(a[i]%2==0){
                    c2++;
                }
                if(a[i]%4==0){
                    c4++;
                }
                if(c4==1||c2==2){
                    cout<<0<<endl;
                    check=1;
                    break;
                }
            }
            if(check==0){
                for(int i=0;i<n;i++){
                    if(a[i]%k){
                        b[i]=(a[i]/k+1)*k-a[i];
                    }
                    else{
                        b[i]=a[i]%k;
                    }
                }
                sort(b,b+n);
                if(c2==0){
                    cout<<min(b[0],2)<<endl;
                }
                else if(c2==1){
                    cout<<min(b[0],1)<<endl;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]%k){
                    b[i]=(a[i]/k+1)*k-a[i];
                }
                else{
                    b[i]=a[i]%k;
                }
            }
            sort(b,b+n);
            cout<<b[0]<<endl;
        } 
    }
    return 0;
}