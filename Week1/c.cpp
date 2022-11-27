#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
string a;
int arip = 0;
int karip = 0;
int cnt = 0;
int knt = 0;
cin >> s >> a;
for(int i = 0;i < s.size(); i++){
    arip++;
    if(s[i] == '#'){
    cnt++;
    }
}
for(int i = 0; i < a.size(); i++){
    karip++;
    if(a[i] =='#'){
    knt++;
    }
}

if(arip-cnt*2 == karip - 2*knt){
    cout << "Yes";
}
else cout << "No";
}