#include <bits/stdc++.h>
using namespace std;

void merge (int arr[], int low, int mid,int high){
    int i,j,k;
    int n1 = mid - low + 1;

    int n2 = high - mid;

    int L[n1], R[n2];

    for(int i = 0 ; i < n1;i++){
        L[i] = arr[i+low];
    }
    for(int i = 0 ; i < n2;i++){
        R[i] = arr[i+mid+1];
    }
    i= 0 ;
    j = 0;
    k = low;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{ 
            arr[k] = R[j];
        j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int low, int high){
    if(low < high){
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr, mid+1, high);
        merge(arr,low,mid,high);
    }

}
int main(){
    int n,m;
    cin >> n;
    int arr[n];
    int q = 0;
    
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    cin >> m;
    int brr[m];
    for(int j= 0; j < m;j++ ){
        cin>> brr[j];
    }
    int a[n+m];
    for(int i = 0 ; i< n;i++){
        a[q++] = arr[i];
    }
    for(int i = 0 ; i< m;i++){
        a[q++] = brr[i];
    }
    mergeSort(a,0,n+m-1);

    for(int i = 0 ; i < n+m;i++){
        cout << a[i] << " ";
    }



}