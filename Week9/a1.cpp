#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include <list>

#define ll long long
// #define pll pair<ll,ll>
// #define f first
// #define s second
// #define dbg(x) cout<<(#x)<<":   "<<x<<'\n';
// #define fi(n)  for(ll i = 0; i < (n); i++)
// #define fio(n) for(ll i = 1; i < (n); i++)
using namespace std;

vector<ll> kmp (const string& s) {
 ll n = s.length();
 vector<ll> pi(n, 0);
 for (ll i=1; i < n; i++) {
  ll j = pi[i-1];
  while (j > 0 && s[i] != s[j]) j = pi[j-1];
  if (s[i] == s[j]) j++;
  pi[i] = j;
 }
 return pi;
}

bool is_pos(const string& s, const string& t, ll m){
    string x;
    while(m--) x += t;
    for(ll i : kmp(s + "#" + x)){
        if (i == s.size()) return true;
    }
    return false;
}

ll bin_search(const string& s, const string& t){
    ll l = -1, r = s.size()/t.size()+4;
    while(l+1 < r){
        ll m = (l+r)/2;
        (is_pos(s, t, m) ? r : l) = m;
    }
    if (r == s.size()/t.size()+4) {
        return -1;
    }
    return r;
}