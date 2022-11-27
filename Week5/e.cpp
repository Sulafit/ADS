#include <bits/stdc++.h>
using namespace std;
int arr[10000];
int n = 0;
void heapifyup(int index){
    if(arr[index] > arr[index/2] and index != 1){
        swap(arr[index], arr[index/2]);
        heapifyup(index/2);
    }
}
void heapifydown(int index){
    int best = index;

    if(index*2 <=n && arr[2*index] > arr[best]) best = index*2;
    if(index *2+1 <= n && arr[2*index] > arr[best]) best = index *2+1;
    if(index != best){
        swap(arr[index] , arr[best]);
        heapifydown(best);
    }
}

void insert(int x){
    n++;
    arr[n] = x;
    heapifyup(n);

}

long long get_max(){
    return arr[1];
}
void erase(){
    swap(arr[1], arr[n]);
    n--;
    heapifydown(1);   
}
int sum =0;
int main(){
    int a , k; 
    cin >> a >> k ;
    string s;
    int c;
    int cnt = 0;
    for (int i =0 ;i < a; i++){
        cin >> s;
        if(s == "insert"){
            cin >> c;
            insert(c);
            // sum+=c;
            cnt++;
        }
        int x ;
        if(s == "print"){
            if(cnt>0){
            while(cnt--){
            
            x = get_max();
            erase();
            sum+=x;
            }

        cout << sum<< endl;
        }
        
        }
        
        }
    }
    

