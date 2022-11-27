#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[999999];
ll n = 0;
ll sum =0;
void heapifyup(ll index){
    if(arr[index] > arr[index /2] and index != 1){
        swap(arr[index], arr[index/2]);
        heapifyup(index/2);
    }
}
void heapifydown(ll index){
    ll best = index;
    if(2*index <= n && arr[2*index] > arr[best]) best = 2*index;
    if(2*index +1 <= n && arr[2*index+1] > arr[best]) best = 2*index +1;
    if(best != index){
        swap(arr[index],arr[best]);
        heapifydown(best);
    }
}
void push(ll x){
    n++;
    arr[n] = x;
    heapifyup(n);
}
void pop(){
    swap(arr[1],arr[n]);
    n--;
    heapifydown(1);
}
ll get_max(){
    return arr[1];
}

int main(){
    ll n, d;
    cin >> n>> d;
    for(int i = 0 ; i < n;i++){
        ll k;
        cin >> k;
        push(k);

    }
    while(d--){
    ll j = get_max();
    pop();
    push(j-1);
    sum +=j;
    
    }
    cout << sum;
    
}