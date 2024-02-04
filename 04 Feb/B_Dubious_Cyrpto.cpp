#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        long long m;
        cin>>l>>r>>m;
        for(int a=l;a<=r;a++){
            int d=(m+r-l)%a+l-r;
            if(d>r-l) continue;
            int c= d>0 ? l:(l-d);
            int b=c+d;
            cout<<a<<" "<<b<<" "<<c<<endl;
            break; 
        }
    }
    return 0;
}