#include <bits/stdc++.h>
using namespace std;
int partition(vector <pair<string, string>> array, int low, int high) {
  string pivot = array[high].first;
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j].first >= pivot){
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
    // bool check = true;
    // map <string ,string> mp;
    for(int i = 0 ; i < n; i++){
        cin >> s1 >> s2;
        bool flag = true;
        for(int i = 0; i < v.size(); i++){
            if(s1 == v[i].second){
                v[i].second = s2;
                flag = false;
                break;
            }
        }
        
        if(flag){
                v.push_back({s1, s2});
        }
    }
    // quickSort(v,0,v.size()-1);
    map <string,string> mp;

    for(int i = 0 ; i < v.size();i++){
        mp[v[i].first] +=v[i].second;
    }
    // for(auto i : mp){
        // cout << i.first << " " << i.second << endl;
        // v.push_back(make_pair(i.first,i.second));
    // }
    
    // vector <pair<string, string>> ans;
    // string copy1;
    // string copy2;
    //  for(int i = 0 ; i < v.size();i++){
            // if(v[i].second == v[i+1].first){
                
            // cnt++;
            // cout << v[i+1].f << " " << v[i].second;
                // copy1 = v[i].first;
                // copy2 = v[i+1].second;
                // v.erase(v.begin() +i);
                // v.erase(v.begin()+i+1);
                // v.push_back(make_pair(copy1, copy2)); 
                // v.push_back(make_pair(c))
                // v.erase(v.begin()+i+1);
            //  v.pop_back(erase_pair(v[i].first, v[i].second));
            //  v.pop_back(v[i+1]);
            
            // else if (v[i].second != v[i+1].first  || v[i+2].first != nullptr) ans.push_back(make_pair(v[i].first,v[i].second));
    //  }
     cout << mp.size()<< endl;
    for(auto i : mp){
        cout<< i.first << " " << i.second<< endl;

    }
}