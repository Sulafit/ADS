#include <bits/stdc++.h>
using namespace std;

// vector<int> find_substring(string t,string s){
//     vector<int> ans;
//     string nS = t+'#'+s;
//     vector<int> pi;
//     pi = pref_func(nS);
//     for(int i = t.length() + 1;i < nS.length(); ++i){
//         if(pi[i] == t.length())
//             ans.push_back(i-2*t.length());
//     }
//     return ans;
// }

// vector<int> prefixFunction(string s) {
//   vector<int> pi(s.length());
//   for (int i = 1; i < s.length(); i++) {
//     int j = pi[i - 1];
//     while (j > 0 && s[i] != s[j]) j = pi[j - 1];
//     if (s[i] == s[j]) j++;
//     pi[i] = j;
//   }
//   return pi;
// }

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

int main() {
  int n;
  cin >> n;
  for(int i =0; i < n; i++) {

    string s;
    int f;
    cin >> s >> f;
    vector<int> pi = prefixFunction(s);

    int l = s.size() - pi.back();
    cout << l * (f - 1) + s.size() << endl;
  }
  return 0;
}