#include <bits/stdc++.h>

using namespace std;
int main(){
    int  n ;  
    cin >> n;
    char arr[n];
    for(int i = 0;i< n; i++){
        cin >> arr[i];
    }
    char j;
    cin >> j;
    for(int i =0 ;i < n; i++){
        if(arr[i] > j ){
            cout << arr[i];
            return 0;
        }

    }
    cout << arr[0];
    return 0;


}