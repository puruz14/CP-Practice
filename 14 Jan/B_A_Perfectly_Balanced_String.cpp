#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> vis(26,0);
        vector<char> a; 
        for(int i=0;i<s.size();i++){
            if(!vis[s[i]-'a']){
                vis[s[i]-'a']=1;
                a.push_back(s[i]);
            }
        }
        int k=a.size();
        int check=0;
        for(int i=k;i<s.size();i++){
            if(s[i]!=s[i-k]){
                check=1;
                break;
            }
        }
        if(check){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}