#include <bits/stdc++.h>
using namespace std;
#define g 10
 
void rabinKarp(char pattern[], char text[], int q) {
  int m = strlen(pattern);
  int n = strlen(text);
  int i, j;
  int p = 0;
  int t = 0;
  int h = 1;


  for (i = 0; i < m - 1; i++)
    h = (h * g) % q;

  // Calculate hash value for pattern and text
  for (i = 0; i < m; i++) {
    p = (g * p + pattern[i]) % q;
    t = (g * t + text[i]) % q;
  }

  // Find the match
  for (i = 0; i <= n - m; i++) {
    if (p == t) {
      for (j = 0; j < m; j++) {
        if (text[i + j] != pattern[j])
          break;
      }

      if (j == m)
        cout << "Pattern is found at position: " << i + 1 << endl;
    }

    if (i < n - m) {
      t = (g* (t - text[i] * h) + text[i + m]) % q;

      if (t < 0)
        t = (t + q);
    }
  }
}

int main()
{

 
  // store prime to reduce overflow
  long long mod = 9007199254740881;
 
  
  
 
    // string to check number of distinct substring
    string s ;
    cin >> s;
 
    // to store substrings
    int ans = 0 ;
 
    // to store hash values by Rabin Karp algorithm
    unordered_map<long long,int>d;
 
    for(int i=0;i<s.length();i++){
      
      long long pre = 0;

      long long D = 256;
 
      for(int j=i;j<s.length();j++){
 
        // calculate new hash value by adding next element
        pre = (pre*D+s[j]) % mod;
 
        // store string length if non repeat
        if(d.find(pre) == d.end())
          ans++;
        d[pre] = 1;
      }
    }
 
    // resulting length
    cout<< ans;
 
  
}