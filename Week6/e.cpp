#include <bits/stdc++.h>
#define fori(n) for(i = 0;i < n;i++)
// #define fori(m) for(i = 0;i < m;i++)
#define forj(n) for(j = 0;j < n;j++)
// #define forj(m) for(j = 0;j < m;j++)

using namespace std;

int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  for(int j = low; j < high; j++) {
    if (array[j] >=pivot){
      i++;
      swap(array[i], array[j]);
    }
  }
  swap(array[i + 1], array[high]);
  return (i + 1);
}
void quickSort(int array[], int low, int high){

  if (low < high) {
      
    int pi = partition(array, low, high);


    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);

  }
}

int main(){
  
int i = 0;
int j = 0;
    int n,m;
    cin >> n>> m;
    int arr[n][m];
    int transp[m][n];

    fori(n){
        forj(m){
            cin >> arr[i][j];
        }
    }
    
    fori(n){
      forj(m) {
         transp[j][i] = arr[i][j];
      }
    }

    forj(m){
        
        // cout << arr[j]<< " ";
         quickSort(transp[j],0,n-1);
        
    }
    
    fori (m){
      forj (n) {
         arr[j][i] = transp[i][j];
      }
      
    }
     fori(n){
         forj(m){
             cout << arr[i][j]<< " ";
         }
         cout << endl;
     }
}