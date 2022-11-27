#include <iostream>
#include <vector>
using namespace std;
int pref_func(string s){
    int n = s.length();
    int cnt = 0;
    vector<int> pi(n);
    for(int i = 1; i < n - 1; ++i){
        int j = pi[i-1];
        while(j > 0 && s[i] != s [j]){
            j = pi[j-1];
        }
        if(s[i] == s[j])
            pi[i] = j + 1;
        if((i + 1) % (i + 1 - pi[i]) == 0 && (i+1)/(i+1-pi[i]) % 2 == 0) cnt++;
    }
    return cnt;
}
int main(){
    string s;
    cin >> s;
    cout << pref_func(s);
}
