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
        int count=0,ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
            }
            else{
                count--;
            }
            if(count<0){
                count=0;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}