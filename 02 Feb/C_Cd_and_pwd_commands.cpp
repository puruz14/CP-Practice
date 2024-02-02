#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s,pwd="/";
    while(t--){
        cin>>s;
        if(s=="pwd"){
            if(pwd[pwd.size()-1]!='/'){
                cout<<pwd+'/'<<endl;
            }
            else{
                cout<<pwd<<endl;
            }
        }
        else{
            string path;
            cin>>path;
            int i=0;
            if(path[0]=='/'){
                pwd="/";
                i=1;
            }
            if(pwd[pwd.size()-1]!='/'){
                pwd+='/';
            }
            for(i;i<path.size();i++){
                if(path[i]!='.'){
                    pwd+=path[i];
                }
                else{
                    pwd.pop_back();
                    while(pwd[pwd.size()-1]!='/'){
                        pwd.pop_back();
                    }
                    i+=2;
                }
            }
        }
    }
    return 0;
}