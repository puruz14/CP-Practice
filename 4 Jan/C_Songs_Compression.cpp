#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin>>n>>m;
    long long a[n],suma=0,sumb=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i]=x-y;
        suma+=x;
        sumb+=y;
    }
    sort(a,a+n,greater<int>());
    if(suma<=m){
        cout<<0<<endl;
    }
    else{
        int count=0;
        for(int i=0;suma>m&&i<n;i++){
            suma-=a[i];
            count++;
        }
        if(suma<=m){
            cout<<count<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}