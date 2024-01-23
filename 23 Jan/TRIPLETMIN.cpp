#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long current=0;
        map<long long,int> mp;
        for(int i=0;i<n-2;i++){
            current+=((n-i-1)*(n-i-2))/2;
            mp.insert({current,a[i]});
        }
        while(q--){
            long long x;
            cin>>x;
            cout<<mp.lower_bound(x)->second<<endl;
        }
    }
}
