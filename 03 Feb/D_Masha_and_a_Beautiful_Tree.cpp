#include<bits/stdc++.h>
using namespace std;

vector<int> a;
int cnt;

void merge(int l,int m,int h){
    if(a[l]>a[m+1]){
        cnt++;
        int i=l,j=m+1;
        while(i<=m){
            swap(a[i++],a[j++]);
        }
    }
}

void divide(int l,int h){
    if(l>=h) return;
    int m=(h+l)/2;
    divide(l,m);
    divide(m+1,h);
    merge(l,m,h);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cnt=0;
        a.resize(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        divide(0,n-1);
        if(is_sorted(a.begin(),a.end())){
            cout<<cnt<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}