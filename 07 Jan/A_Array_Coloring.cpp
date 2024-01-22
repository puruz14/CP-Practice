#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,t,odd=0,even=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>t;
            if(t%2){
                odd++;
            }
            else{
                even++;
            }
        }
        if(odd%2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}