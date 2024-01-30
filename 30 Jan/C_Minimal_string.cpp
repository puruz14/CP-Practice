#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    multiset<char> a;
    for(auto i : s){
        a.insert(i);
    }
    string ans="";
    stack<char> u;
    int i=0;
    while(i<s.size()){
        u.push(s[i]);
        auto it=a.find(s[i]);
        a.erase(it);
        while(!a.empty() && !u.empty() && *a.begin()>=u.top()){
            ans+=u.top();
            u.pop();
        }
        i++;
    }
    while(!u.empty()){
        ans+=u.top();
        u.pop();
    }
    cout<<ans<<endl;
    return 0;
}