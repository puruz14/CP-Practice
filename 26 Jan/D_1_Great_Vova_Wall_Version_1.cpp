#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    stack<int> s;
    for(int i=0;i<n;i++){
        int x=a[i]%2;
        if(!s.empty()&&s.top()==x) s.pop();
        else s.push(x);
    }
    if(s.size()<=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}