#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> a,b;
	int l=0,r=s.size()-1;
	while(l<r) {
		while(l<s.size()&&s[l]==')')
			l++;
		while(r >= 0 && s[r] == '(')
			r--;
		if(l<s.size()&&r>=0&&l<r){
			a.push_back(l + 1);
			b.push_back(r + 1);
			l++;
			r--;
		}
	}
	if(a.empty()) {
		cout << "0\n";
		return 0;
	}
	cout<<1<<endl;
	cout<<2*b.size()<<endl;
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
	reverse(b.begin(), b.end());
	for(int i=0;i<b.size();i++)
		cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}