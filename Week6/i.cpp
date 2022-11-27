#include <bits/stdc++.h>
using namespace std;
int partition(string &s,int low, int high){
int pivot = s[high];
  int i = (low - 1);
  for (int j = low; j < high; j++){

    if (s[j] <= pivot){
      i++;
      swap(s[i], s[j]);
    }
  }
  swap(s[i + 1], s[high]);
  
  return i + 1;
}
// void quickSort(string &str, int left, int right){
//     int i = left, j = right;
//     int mid = str[(left + right) / 2];

//     while (i <= j) {
//         while (str[i] < mid)
//             i++;
//             while (str[j] > mid)
//                 j--;
//             if (i <= j) {
//                 swap(str[i], str[j]);
//                 i++; j--;
//             }
//     };

//     if (left < j)
//         quickSort(str, left, j);
//     if (i < right)
//         quickSort(str, i, right);
// }


void quickSort(string &s,int low,int high){
    if (low < high) {
      
    int pi = partition(s, low, high);

    quickSort(s, low, pi - 1);
    quickSort(s, pi + 1, high);
  }

}
int main(){


    string s1;
    cin >> s1;
    quickSort(s1,0,s1.size()-1);
    
    cout << s1 ;
}