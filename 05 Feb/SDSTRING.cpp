#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int one=0,zero=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                one++;
            }
            else{
                zero++;
            }
        }
        if(s.size()%2||!one||!zero){
            cout<<-1<<endl;
        }
        else{
            cout<<abs(one-zero)/2<<endl;
        }
    }
}
