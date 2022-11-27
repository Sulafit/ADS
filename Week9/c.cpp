#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,a;
    cin >> s >> a;
    deque <char> dq;
    deque <char> dq1;

    for(int i = 0; i < s.size();i++){
        
        dq.push_back(s[i]);
        dq1.push_back(a[i]);
    }
    int cnt = 0;
    while(dq != dq1 ){
        if(dq != dq1 && cnt == a.size()){
            cout << -1;
            return 0;
        }
        dq.push_front(dq.back());
        dq.pop_back();
        cnt++;
    }
    
    cout << cnt;
    
}