#include <bits/stdc++.h>
using namespace std;
int arr[3];

int binss(int mid,int arr[]){
    return mid/arr[0] + mid/arr[1] + mid/arr[2];

}
int main(){
    int n;
    cin >> n;
    int arr[3];
    for(int i = 0; i < 3; i++){
        cin >> arr[i] ;
    }
    int l = 0;
    int r = 10000;
    while(l+1 <r){
        int mid = (l+r)/2;
        if(binss(mid,arr) >=n) r = mid;
        else l = mid;
    }
    cout << r<< " ";


}