#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

ll n;
cin >> n;
ll arr[n];

for(ll i = 0 ; i < n; i++){
    cin >> arr[i];

}
ll power[1000];
power[0] = 1;
ll k = 2;


    for (ll i = 1; i <= 102; i ++) {
        power[i] = power[i - 1] * k;
    }

string h = "";
for (ll i=0; i<n; ++i){
{   
if(i){
	h+= char((arr[i] - arr[i-1])/ power[i]+97);
    }

else{
    h+= char((arr[i] )/power[i]+97);
}


}
}
cout << h;

}