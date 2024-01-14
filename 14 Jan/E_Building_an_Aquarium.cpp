// #include<iostream>
// using namespace std;

// bool ok(long long mid,long long x,int arr[],int n){
//     long long temp=0;
//     for(int i=0;i<n;i++){
//         temp+=max(0ll,mid-arr[i]);
//     }
//     return temp<=x;
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,x;
//         cin>>n>>x;
//         int a[n];
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         long long low=0,high=1e10;
//         while(low<=high){
//             long long mid=low+(high-low)/2;
//             if(ok(mid,x,a,n)){
//                 low=mid+1;
//             }
//             else{
//                 high=mid-1;
//             }
//         }
//         cout<<high<<endl;
//     }
//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,x,i,q,j,h=0,p,k=0,l=0;
        cin>>n>>x;
        long long a[n];
        for(int m=0;m<n;m++){
            cin>>a[m];
        }
        sort(a,a+n);
        for(int d=0;d<n-1;d++){
            if(a[d]!=a[d+1]){
                q++;
            }
        }
        for(i=0;(h<x)&&(i<a[n-1])&&(x-h)>=l;i++){
            p=0;
            for(j=0;a[j]<=i&&(x-h)>=l;j++){
                p++;
            }
            l=p;
            h+=p;
        }
        long long y=(max((long long) 0,(x-h)/n));
        cout<<i+y<<endl;
    }
    return 0;
}