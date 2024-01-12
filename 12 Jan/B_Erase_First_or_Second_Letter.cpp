#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int vis[26]={0},ans=0;
        for(int i=0;i<n;i++){
            if(!vis[s[i]-'a']){
                vis[s[i]-'a']=1;
                ans+=(n-i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}   