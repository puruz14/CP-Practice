#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l;
        cin>>n>>l;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int i=0,j=n-1;
        double car1=0,car2=l,ans=0;
        while(i<=j){
            double t1=(a[i]-car1)/(i+1);
            double t2=(car2-a[j])/(n-j);
            if(t1<t2){
                ans+=t1;
                car1=a[i];
                car2-=t1*(n-j);
                i++;
            }
            else{
                ans+=t2;
                car2=a[j];
                car1+=t2*(i+1);
                j--;
            }
        }
        ans+=(car2-car1)/(i+1+n-j);
        cout<<fixed<<setprecision(8)<<ans<<endl;
    }
    return 0;
}