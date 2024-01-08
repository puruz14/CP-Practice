#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=n%2;
        vector<int> cnt(26);
        for(int i=0;i<n;i++){
            cnt[s[i]-'a']++;
            ans=max(ans,2*cnt[s[i]-'a']-n);
        }
        cout<<ans<<endl;
    }
    return 0;
}