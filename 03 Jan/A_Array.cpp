#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,check=1,check1=1,a,b=-1,p,q;
    cin>>n;
    vector<int32_t> v;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<0&&check){
            a=x;
            check=0;
        }
        else{
            if(x>0&&check1){
                b=x;
                check1=0;
            }
            else{
                v.push_back(x);
            }
        }
    }
    cout<<1<<" "<<a<<endl;
    if(b==-1){
        cout<<2<<" ";
        int cnt=0;
        for(int i=0;cnt<2;i++){
            if(v[i]!=0){
                cout<<v[i]<<" ";
                if(cnt==0){
                    p=v[i];
                }
                if(cnt==1){
                    q=v[i];
                }
                cnt++;
            }
        }
        cout<<endl;
        cout<<n-3<<" ";
    }
    else{
        cout<<1<<" "<<b<<endl;
        cout<<n-2<<" ";
    }
    if(b==-1){
        for(int i=0;i<v.size();i++){
            if(v[i]!=p&&v[i]!=q){
                cout<<v[i]<<" ";
            }
        }
    }
    else{
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}