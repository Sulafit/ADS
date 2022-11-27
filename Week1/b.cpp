// Example program
#include <bits/stdc++.h>
using namespace std;
int main()

{
vector <int> v;
int n;
cin >> n;
int arr[n];
for(int i =0; i < n; i++ ){
    cin >> arr[i];
}    
for(int i =0; i < n; i++){
    bool young = false;
    for(int j =i-1; j >= 0; j--){
        if(arr[i] >=  arr[j]){
            v.push_back(arr[j]);
            young = true;
            break;
        }
    }   
    if(!young){
        v.push_back(-1);
    }
}
for(int i =0 ; i < v.size(); i++){
    cout << v[i] << " ";
}


}
