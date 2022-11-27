// Example program
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()

{
    
vector <int> v;
int cnt = 0;
int n ;
cin >> n;


for(int i = 2 ; i <= 10000; i++){
    bool a  =true;
    
    for(int j =2; j <= sqrt(i);j++ ){
        
        if(i % j == 0 ) {
            a  = false;
        }
}
if(a) v.push_back(i);

}
    cout << v[n-1] << " ";

}