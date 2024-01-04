#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int p=-1,q=n;
        for(int i=0;i<n;i++){
            if(a[i]<i){
                break;
            }
            p=i;
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]<(n-1-i)){
                break;
            }
            q=i;
        }
        if(p>=q){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}