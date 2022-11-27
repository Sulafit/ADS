#include <bits/stdc++.h>
using namespace std;
#define ll  long long
#define d 10

// void rabinKarp(char pattern[], char text[], int q) {
//   int m = strlen(pattern);
//   int n = strlen(text);
//   int i, j;
//   int p = 0;
//   int t = 0;
//   int h = 1;

//   for (i = 0; i < m - 1; i++)
//     h = (h * d) % q;

//   // Calculate hash value for pattern and text
//   for (i = 0; i < m; i++) {
//     p = (d * p + pattern[i]) % q;
//     t = (d * t + text[i]) % q;
//   }

//   // Find the match
//   for (i = 0; i <= n - m; i++) {
//     if (p == t) {
//       for (j = 0; j < m; j++) {
//         if (text[i + j] != pattern[j])
//           break;
//       }

//       if (j == m)
//         cout << "Pattern is found at position: " << i + 1 << endl;
//     }

//     if (i < n - m) {
//       t = (d * (t - text[i] * h) + text[i + m]) % q;

//       if (t < 0)
//         t = (t + q);
//     }
//   }
// }

ll n;

ll power[99999];

map <string,int> mp;
ll modu = 1e9+7;
int main(){
    cin >> n;
    string s;
    string a[n * 2 + 1];
    
    power[0] = 1;
    for (ll i = 1; i <1000; i++){
        power[i] = power[i-1]*11 % modu;
    }
    
     for( ll i = 1 ;  i < 2 * n; i++){
        cin >> a[i];

        mp[a[i]]++;

        }
    int cnt = 0;


    for( ll i = 1 ;  i <= 2*n; i++){
        ll sum = 0;
        int j = 0;
        while(j < a[i].size()){
            // sum = ((s[j]-47) * power[j] % modu + sum) % modu; 
            // sum %= modu;
            sum += ((int(a[i][j] - 47) * 1ll * power[j]) % modu);
            sum %= modu;
            j++;
        }
        
    
    string pustoy = "";
        while (sum != 0) {
            pustoy += char('0' + (sum % 10));
            sum /= 10;

        }
        reverse (pustoy.begin(), pustoy.end());
        if (mp[pustoy] >= 1) {
            if (cnt == n) {
                exit(0);
            }
            cnt++;
            printf("Hash of string \"%s\" is %s\n", a[i].c_str(), pustoy.c_str());

        }
    }
    assert(cnt >= n);
}
    // cout << endl;
    // for(auto x : mp){
    //     cout << x.first << " "<< x.second<< endl;
    // }
    
