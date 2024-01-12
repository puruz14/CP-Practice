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
        bool check=true;
        int index;
        for(int i=0;i<n;i++){
            index=a[i]-1;
            if(index>=n){
                check=false;
                break;
            }
            else if(a[index]<i+1){
                check=false;
                break;
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