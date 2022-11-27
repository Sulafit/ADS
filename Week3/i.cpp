#include <bits/stdc++.h>
using namespace std;

int Binary_search(vector <int> v,int val){
    int l = 0, r = v.size()-1;
    while(l<=r){
    int mid = (l+r)/2;
    if(v[mid] == val){ 
    
        return true;
    }
    if(v[mid] > val)r = mid -1;
    else if(v[mid] < val) l = mid +1;
    
    }
        return false;   
}
int main(){
    int n, k ;
    cin >> n;
    vector <int> v;
    for(int i =0 ; i< n;i++){
        int b;
        cin >> b;
        v.push_back(b);

    }
    cin >> k;
    if(Binary_search(v,k)) cout << "Yes";
    else cout << "No";
}