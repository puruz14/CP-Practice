#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n,max=INT_MIN;
    	cin>>n;
    	long long a[n];
    	for(int i=0;i<n;i++){
    	    cin>>a[i];
    	    if(abs(a[i])>max){
    	        max=abs(a[i]);
    	    }
    	}
    	sort(a,a+n);
    	cout<<min({a[0]*a[0],a[0]*a[n-1],a[n-1]*a[n-1]})<<" "<<max*max<<endl;
	}
}
