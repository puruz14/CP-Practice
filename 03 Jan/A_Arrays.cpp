#include<iostream>
using namespace std;

int main(){
    int a,b,p,q;
    cin>>a>>b>>p>>q;
    int r[a],s[b];
    for(int i=0;i<a;i++){
        cin>>r[i];
    }
    for(int i=0;i<b;i++){
        cin>>s[i];
    }
    int count=0;
    for(int i=b-1;i>=0;i--){
        if(s[i]>r[p-1]){
            count++;
        }
        else{
            break;
        }
    }
    if(count<q){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}