#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <deque>

using namespace std;

void binarysearch(int y,int l,int r,int arr[][3]){
    while(l<=r){
        int mid = l + (r - l) / 2;
        if(y >= arr[mid][1] and y <= arr[mid][2]){ cout<<mid + 1<<endl;return; }
        if(y > arr[mid][1]){ l = mid + 1;} 
        else if(y < arr[mid][2]){ r = mid - 1;}
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector <int> v;
    int arr[n][3];
    int temp = 1;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        arr[i][0] = x;
        arr[i][1] = temp;
        arr[i][2] = temp + x - 1;
        temp = temp + x;
    }
    // for(int i=0;i<n;++i){
    //     for(int j=0;j<3;++j){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    while(m--){
        int y;cin>>y;
        binarysearch(y,0,n-1,arr);
        // while(l<=r){
        //     int mid = l + (r - l) / 2;
        //     if(y > arr[mid][1] and y <= arr[mid][2]){ cout<<mid + 1<<endl;break; }
        //     if(y > arr[mid][1]){ l = mid + 1; } 
        //     else if(y < arr[mid][2]){ r = mid - 1; }
        // }
    }
}