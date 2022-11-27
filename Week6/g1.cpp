#include <bits/stdc++.h>
using namespace std;
int partition(vector <pair<string, string>> array, int low, int high) {
  string pivot = array[high].first;
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j].first <= pivot){
      i++;
      swap(array[i], array[j]);
      
    }
  }

  swap(array[i + 1], array[high]);
  
  return (i + 1);
}
void quickSort( vector <pair<string, string>> array, int low, int high) {
  if (low < high) {
      
    int pi = partition(array, low, high);

    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

int main(){
    int n;
    cin >> n;
    string s1,s2;
    vector <pair<string,string>> v;
    // map <string ,string> mp;
    for(int i = 0 ; i < n; i++){
        cin >> s1 >> s2;
        v.push_back(make_pair(s1,s2));
    }
    quickSort(v,0,n-1);
    for(int i = 0 ; i < v.size()-1;i++){
        cout << v[i].first << " " << v[i].second<< endl;
    }

    // }
    // for(auto i : mp){
        // v.push_back(make_pair(i.first,i.second));
    
}