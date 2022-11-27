#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> v;
int partition( int low, int high,int col) {
  int pivot = v[high][col];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (v[j][col] >= pivot){
      i++;
      swap(v[i][col], v[j][col]);
    }
  }
  swap(v[i+1][col], v[high][col]);
  return (i + 1);
}
void quickSort( int low, int high, int col) {
  if (low < high) {
    int pi = partition( low, high,col);
    quickSort( low, pi - 1,col);
    quickSort( pi + 1, high,col);
  }
}

int main(){
    int n,m;
    cin >> n>> m;
    int x1;
    for(int i = 0; i < n; i++){
        vector <int> tmp;
        for(int j =0; j < m; j++){
            cin >> x1;
            tmp.push_back(x1);
        }
        v.push_back(tmp);
    }
    for(int col =0; col< m;col++){
        quickSort(0,n-1,col);
    }
    for(int i = 0; i < v[n].size();i++){
        for(int j = 0; j< v[m].size(); j++){
            cout << v[i][j]<< " ";
        }
        cout << endl;
    }
}