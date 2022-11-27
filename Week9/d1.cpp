#include <bits/stdc++.h>
using namespace std;

vector<int> prefixFunction(string s){
  vector<int> res(s.size());
  for(int i=1;i<res.size();i++){
    int j=res[i-1];
    while(j>0 && s[i] != s[j]) j=res[j-1];
    if(s[i]==s[j]) j++;
    res[i]=j;
  }
  return res;
}

void findSubstrs(string txt, string pat, vector<string> &v) {
  string concat = pat + '#' + txt;
  vector<int> pi = prefixFunction(concat);
  for (int i = pat.size() + 1; i < concat.size(); i++) {
    if (pi[i] == pat.size()) {
      if(i-2*pat.size() == 0){
        txt[0] -= 32;
        v.push_back(txt);
      }
      return;
    }
  }
}


int main()
{
  string prev;
  int n;
  cin >> prev >> n;
  int N = prev.size();
  vector<string> allPrefixes;
  vector<string> cities;

  for(int i=0;i<N;i++)
  {
    allPrefixes.push_back(prev.substr(i,N-i));
  }

  for(int i=0;i<n;i++)
  {
    string city;
    cin >> city;
    city[0] += 32;
    cities.push_back(city);
  }

  for(int i = 0;i<N;i++)
  {
    vector<string> ans;
    for(int j=0;j<n;j++){
      findSubstrs(cities[j], allPrefixes[i], ans);
    }
    if(!ans.empty()){
      cout<<ans.size()<<endl;
      for(auto x: ans) cout<<x<<"\n";
      return 0;
    } 
  }
  cout<<0<<endl;
  return 0;
}