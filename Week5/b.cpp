#include <bits/stdc++.h>
using namespace std;
int arr[10000];
int n = 0;
void heapifyup(int index){
    if(arr[index] > arr[index /2] and index != 1){
        swap(arr[index], arr[index/2]);
        heapifyup(index/2);
    // while(arr[index] < arr[index/2] && index != 1){
    //      swap(arr[index],arr[index/2]);
    //      index = index/2;
    }
}
void heapifydown(int index){
    int best = index;
    if(2*index <= n && arr[2*index] > arr[best]) best = 2*index;
    if(2*index +1 <= n && arr[2*index+1] >arr[best]) best = 2*index +1;
    if(best != index){
        swap(arr[index],arr[best]);
        heapifydown(best);
    }
}
void push(int x){
    n++;
    arr[n] = x;
    heapifyup(n);
}
void pop(){
    swap(arr[1],arr[n]);
    n--;
    heapifydown(1);
}
int get_max(){
    return arr[1];
}

int main(){
    int q;
    cin >> q;
    for(int i = 0 ; i < q;i++){
        int k;
        cin >> k;
        push(k);
    }
    int y,x;

    // while(n){
    //     if(n==1){
    //         cout << get_max();
    //     }

    //     y = get_max();
    //     pop();
    //     x = get_max();
        
    //     if(y!= x){
    //         pop();
    //         push(y-x);
            
    //     }
    //     if(x == y){
    //         pop();
    //     }
        
    //     else cout << 0;

    while(n!=1){
    y = get_max();
    pop();
    x = get_max();
    pop();
    push (y-x);
    
    }
    cout << arr[1]<< " ";
    }

    
    
