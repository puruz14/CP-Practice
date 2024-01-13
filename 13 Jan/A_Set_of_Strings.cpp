#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    vector<int> vis(26,0),index;
    for(int i=0;i<s.size();i++){
        if(!vis[s[i]-'a']){
            vis[s[i]-'a']=1;
            index.push_back(i);
        }
    }
    if(index.size()>=k){
        cout<<"YES"<<endl;
        int count=0;
        for(int i=0;i<k-1;i++){
            cout<<s.substr(index[i],index[i+1]-index[i])<<endl;
            count++;
        }
        cout<<s.substr(index[count]);
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}