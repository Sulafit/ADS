#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll partition(ll arr[], ll low , ll high){

ll pivot = arr[high];
  ll i = (low - 1);
  for(ll j = low; j < high; j++) {
    if (arr[j] <=pivot){
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);

  return (i + 1);
}

void quickSort(ll arr[], ll low , ll high){
    if(low < high){
       int pi = partition(arr,low,high);
    
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
    }

}
int main(){
    ll n,m;
    cin >> n>> m;
    ll arr[n];
    ll brr[m];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(ll i = 0; i < m; i++){
        cin >> brr[i];
    }
    quickSort(arr, 0, n-1);
    quickSort(brr,0,m-1);
    vector <ll> v(n+m);
    vector <ll> :: iterator i,j;
    i = set_intersection(arr, arr+ n, brr, brr+m, v.begin());
    // for(ll i = 0 ; i< v.size()-1;i++){
        for (j = v.begin(); j != i; j++){
        cout << *j << " ";
    }

}
