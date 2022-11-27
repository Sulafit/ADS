// Merge sort
// recuirsivly deciding array to two parts and sort each with comparing the firs elements
// Quicksort
#include <bits/stdc++.h>
using namespace std;
int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot){
      i++;
      swap(array[i], array[j]);
      
    }
  }

  swap(array[i + 1], array[high]);
  
  return (i + 1);
}
void quickSort(int array[], int low, int high) {
  if (low < high) {
      
    int pi = partition(array, low, high);

    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}
int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0 ; i < n;i++){
    cin >> arr[i];
  }
  quickSort(arr,0,n-1);
  for(int i = 0 ; i< n;i++){
    cout << arr[i]<< " ";
  }
}