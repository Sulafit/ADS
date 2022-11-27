
#include <bits/stdc++.h>
using namespace std;
#define MAX 2*1000001
#define ll long long 

ll arr[4*MAX];
ll n = 0;
void heapifyup(ll index){
     if(arr[index] < arr[index/2] && index != 1){
         swap(arr[index], arr[index/2]);
         heapifyup(index/2);
     }
    // while(arr[index] < arr[index/2] && index != 1){
    //     swap(arr[index],arr[index/2]);
    //     index = index/2;
    // }
}

void heapifydown(ll index){
    ll mx = index;
    if(2* index <= n &&  arr[2* index] < arr[mx]) mx = 2*index;
    if(2 *index+1 <= n &&  arr[2* index +1] < arr[mx]) mx = 2*index +1;
    if(mx != index){
        swap(arr[index], arr[mx]);
        heapifydown(mx);
    }
}
void push(ll x){
    n++;
    arr[n] = x;
    heapifyup(n);
}
void pop(){
    swap(arr[1], arr[n]);
    n--;
    heapifydown(1);
}

ll get_min(){
    return arr[1];
}


ll sum = 0;
ll min1, min2 ;
 main(){
    ll l;
    cin >> l;
    for(ll i = 0 ; i < l; i++){
        ll h;
        cin >> h;
        push(h);

    }
   
    while(n!= 1){
    min1 = get_min();
    pop();
    min2 = get_min();
    pop();
    push(min1 + min2);
    sum += min1 + min2;
    }
    cout << sum;
}
