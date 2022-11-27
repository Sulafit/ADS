#include <bits/stdc++.h>
using namespace std;
int binarkago(int arr[],int n, int mid ){
    int sum = 0;
    for(int i = 0; i <n ; i++){
        sum += ceil(arr[i] / mid);
        // if(arr[i] % mid!=0){
        //     sum +=1;
        // }
    }
    return sum ;
}

int main(){
    int n, k ;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int l = 0;
    int r = 10000000;
    while(l +1!=r){
        int mid = (l+r)/2;
        if(binarkago(arr,n,mid)<= k){
            r = mid ;
        }
        else{
            l = mid ;
        }
    }
    cout << r;
    cout << l;
    // cout << r << endl;

    
}