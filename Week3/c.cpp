#include <bits/stdc++.h>
using namespace std;

void  Binarka(int n,int arr[],int cnt,int k){
    
if(k == 0){
    return;
}
    int l1,r1,l2,r2;
 cin >> l1 >> r1 >> l2 >> r2;
 for(int i = 0; i < n;i++){
    if(l1 <= arr[i] and arr[i] <=r1 || l2 <= arr[i] and arr[i] <=r2){
        cnt++;
    }

 }

 cout <<  cnt << endl;
 k--;
 Binarka(n,arr,0,k);
}

int main(){
int n, k;
cin >>n >> k;
int arr[n];
for(int i =0; i < n; i++){
    cin >> arr[i];
}
int cnt = 0;
 Binarka(n,arr,cnt,k);

}