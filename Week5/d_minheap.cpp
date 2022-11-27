#include <bits/stdc++.h>
using namespace std;
int arr[10000];
int n = 0;


void heapifyup(int index){
    if(arr[index] <arr[index/2] && index !=1){
        swap(arr[index] , arr[index/2]);
        heapifyup(index/2);
    }

}
void push(int x){
    n++;
    arr[n] = x;
    heapifyup(n);
}
void heapifydown(int index){
    int best = index;
    if(index *2 <=n && arr[2*index] < arr[best]) best = 2*index;
    if(index *2 +1 <= n && arr[2*index+1] < arr[best]) best = 2*index +1;
    if(best != index){
        swap(arr[index], arr[best]);
        heapifydown(best);
    }
}
void erase_max(){
    swap(arr[1],arr[n]);
    n--;
    heapifydown(1);
}
int get_min(){
    return arr[1];
}
long long get_min2(){
    if(n>=3)
        if(arr[2] <= arr[3])
            return arr[2];
    
        else 
         return arr[3];
    
    if(n < 3)
        return arr[2];
}
    

// bool check(int m){
//     int  cnt = 0;
//     for(int i = 0; i < n;i++){
//         if(arr[i] >= m)cnt++;
//     }
//     if(cnt == n){ 
//         return true;
//         size++;
//     }

//     else return false;
// }

int l1,l2;

int main(){
    int l,m;
    cin >> l >> m;
    while(l--){
        int k ;
        cin >> k;
        push(k);
    }
    int size = 0;

    while(get_min() <= m && n >=2){
            push(get_min() + 2*get_min2());
            erase_max();
            erase_max();
            size++;
        }

        if(n <=2 && arr[1] <= m){
            cout << -1;
        }
        
        else cout << size << endl;
        
    }
    
    