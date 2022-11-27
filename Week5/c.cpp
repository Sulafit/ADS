#include <bits/stdc++.h>

using namespace std;
int arr[10000];
int n = 0 ;
int sum = 0;
void heapifyup(int ind){
    if(arr[ind] > arr[ind/2] and ind !=1){
        swap(arr[ind], arr[ind/2]);
        heapifyup(ind/2);
    }
}
void heapifydown(int ind){
    int best = ind;
    if(ind*2 <= n && arr[best] <arr[ind*2]) best = 2*ind;
    if(2*ind+1 <= n && arr[best] < arr[2*ind +1] ) best = 2*ind+1;
    if(best != ind){
        swap(arr[ind], arr[best]);
        heapifydown(best);
    }
}

void push(int x){
    n++;
    arr[n] = x;
    heapifyup(n);
}

void popmax(){
    swap(arr[1], arr[n]);
    n--;
    heapifydown(1);
}

int get_max(int k){
    //   return arr[1] ;
    if(k>0){
        // cout << sum;
        // return;
//     // }
     int l = arr[1];
     
     popmax();
     sum+=l;
    l--;
    push(l);
     get_max(k-1);
    }
    return sum;

// int get_cost(int k){
//     if(k>0){
//     int g = get_max();
//     popmax();
//     return g + get_cost((k-1));
//     }
//     else return 0;
 }
int main(){

    int m, k;
    cin >> m >> k;
    for(int i = 0 ;i < m; i++){
        int b;
        cin >> b;
        push(b);
    }
        cout << get_max(k);
        // popmax();
        // cout << get_max()<< " ";
        // popmax();
        // cout << get_max();
        // push(h-1);
    
    // cout << sum<< " ";

}