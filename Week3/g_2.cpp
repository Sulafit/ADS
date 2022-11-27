#include <bits/stdc++.h>

using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long max=0;
    double a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max){
            max = a[i];
        }
    }
    double r = max+1;
    long long l = 0;
    while(l+1<r){
        unsigned long long cnt = 0;
        int mid = (l+r)/2;
        for(int i=0;i<n;i++){
            unsigned long long dd = int(ceil((a[i])/mid));

            cnt+=dd;
            // cout<<cnt<<" ";
        }
        if(cnt<=k){
            r = mid;
        }else{
            l = mid ;
        }
        
    }
    
    cout<<r;
    return 0;
}