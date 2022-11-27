#include <bits/stdc++.h>


using namespace std;

vector<int> pref_func(string &s){
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

vector <string> find_substring(string t,string s, vector <string> &pi){
    s[0] = toupper(s[0]);
    
    vector<string> ans;
    string nS = t+'#'+s;
    
    vector<int> v = pref_func(nS);
    for(int i = t.length() + 1;i < nS.length(); ++i){
        if(v[i] == t.length())
            pi.push_back(s);
    }
}

vector<long long> kmp (const string& s) {
 long long n = s.length();


 vector<long long> pi(n, 0);

 for (long long i=1; i < n; i++) {

  long long j = pi[i-1];
  while (j > 0 && s[i] != s[j]) j = pi[j-1];
  if (s[i] == s[j]) j++;
  pi[i] = j;
 }
 return pi;
}

bool durys_pa(const string& s, const string& t, long long m){
    string x;

    while(m--) x += t;

    for(long long i : kmp(s + "#" + x)){
        if (i == s.size()) return true;
    }
    return false;
}

long long binarka(const string& s, const string& t){ 

    long long l = -1, r = s.size()/t.size()+4;

    while(l+1 < r){

        long long m = (l+r)/2;

        (durys_pa(s, t, m) ? r : l) = m;
    }

    if (r == s.size()/t.size()+4) {
        
        return -1;
    }
    return r;
}
int main(){
    
    string s, t;
    cin >> t >> s;
    cout << binarka(s, t);
    return 0;
}