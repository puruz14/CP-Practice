#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,d;
    cin>>n>>d;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    long long c=n,count=0;
    for(int i=0;i<n;i++){
        c-=(d/a[i]+1);
        if(c<0){
            break;
        }
        count++;
    }
    cout<<count<<endl;
    return 0;
}

