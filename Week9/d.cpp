#include <bits/stdc++.h>
using namespace std;


vector<int> pref_func(string s){
    int n = s.length();
    vector<int> pi(n);
    for(int i = 1; i < n; ++i){
        int j = pi[i-1];
        while(j > 0 && s[i] != s [j]){
            j = pi[j-1];
        }
        if(s[i] == s[j])
            ++j;
        pi[i] = j;
    }
    return pi;
}

void find_substring(string t, string s, vector <string> &pi){
    vector<string> ans;
    string nS = t+'#'+s;
    
    vector<int> v = pref_func(nS);
    for(int i = s.size() + 1;i < nS.length(); ++i){
        if(v[i] == s.size())
            if(i-2*s.size() == 0){
            t[0] -= 32;
            pi.push_back(t);
      }
      return;
    }
}

void findSubstrs(string txt, string pat, vector<string> &v) {
  string concat = pat + '#' + txt;
  vector<int> pi = pref_func(concat);
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

int main(){
    vector <string> v;
    vector <string> g;
    vector <string> ans;
    string s;
    cin >> s;
    int k = s.size();
    for(int i = 0 ;i < k;i++){
        v.push_back(s.substr(i,k-i));
    }
    // for(int i = 0 ; i < v.size();i++){
        // cout << v[i] << " ";
    // }
    int n; 
    cin >> n;

    for(int i = 0 ; i < n; i++){
        string j;
        cin >> j;
        j[0]+=32;
        g.push_back(j);
    }
    // cout << v[v.size()-1];
        

    for(int i = 0;i <k; i++){
        vector <string> ans;
        for(int j =  0; j < n; j++){
        findSubstrs(g[j],v[i],ans);
        }
        if(!ans.empty()){
            cout << ans.size()<< endl;
            for(auto x : ans)
                cout << x << endl;
                return 0;
        }
    }
    cout<<0<<endl;
    return 0;
    
}
            
    
    
        

    

