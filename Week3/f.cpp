#include <iostream>
#include <vector>
#include <bits/stdc++.h>


using namespace std;




int main(){
    int n; 
    cin >> n;
    vector <int> v;
    for(int i = 0 ; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int k;
    cin >>k;
    for(int i = 0; i < k; i++){
        int b;
        cin >> b;
        int cnt = 0 ;
        int sum = 0 ;
    
    int j =0;
    while(b >= v[j] and j < v.size()){
        cnt++;
        sum +=v[j];
        j++;
    }
    cout << cnt << ' ' << sum << endl;
    
    }
}