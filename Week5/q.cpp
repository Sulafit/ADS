#include <bits/stdc++.h>
using namespace std;
int n = 0;
int arr[100000];
void heapifyup(int i){
    if(arr[i] > arr[i/2] and i !=1){
        swap(arr[i], arr[i/2]);
        heapifyup(i/2);
    }
}
void heapifydown(int i){
    int best = i;
    if(2*i <= n and arr[best] < arr[2*i] ) best = 2*i;
    if(2*i +1 <= n and arr[best] < arr[2*i+1] ) best = 2*i+1;
    if(best != i ){
        swap(arr[i] , arr[best]);
        heapifydown(best);
    }
}

int get_max(){
    return arr[1];
}

void pop(){
    swap(arr[1], arr[n]);
    n--;
    heapifydown(1);
}


void push(int k){
    n++;
    arr[n] = k;
    heapifyup(n);

}
int main(){
    int x;
    cin >> x;
    for(int i =0; i < x; i++){
        int k ;
        cin >> k;
        push(k);
    }
    while(x--){
    cout << get_max();
    pop();
    }
    
    
}