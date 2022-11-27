#include <bits/stdc++.h>
using namespace std;
long long binary(vector <long long>& v, long long mid){
    long long pieces = 1;
    long long tmpSum = 0;
    for(long long i =0 ; i <= v.size()-1; i++){
        if(tmpSum + v[i] > mid){
            tmpSum = v[i];
            pieces ++;
        }
        else tmpSum +=v[i];
    }
    return pieces;
}

int main(){
    long long a;
    long long b;
    cin>>a >> b;
    vector <long long> v;
    for(int i=0;i<a;++i){
        int x;
        cin>>x;
        v.push_back(x);
    }
    long long sum = 0 ; 
    long long mx = -99999; 
    for(int i = 0; i <= v.size()-1 ; i++){
        if(v[i] > mx){
            mx  = v[i];
        }
        sum +=v[i];

    }
    long long  left = mx;
    long long right = sum;
    long long ans = right;
    while(left <= right){
        long long mid = left + (right - left)/2;

        long long p = binary(v, mid);

        if(p > b) left = mid +1;
        else if(p <=b) { 
        ans = mid;
        right = mid-1 ;
        }
    }
    cout << ans;
    
}

// 21B030851