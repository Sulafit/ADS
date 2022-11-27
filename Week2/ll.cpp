#include <bits/stdc++.h> 
using namespace std; 
 
int main(){ 
    int n, x; 
    cin >> n; 
    deque <int> dq;
     
    string t = "";

    while(n--){ 
        cin >> x; 
        while( x!=1){ 
            int k = x % 2;
            if(k == 1) t += '1'; 
            else t += '0'; 
            x /= 2;
        }

        reverse(t.begin(), t.end()); 
        for(int i = 0; i < t.size(); i++){ 
            if(t[i] == '1') dq.push_back(1); 
            else dq.pop_back();   
        } 
        if(dq.empty()) cout << "YES" << endl; 
        else cout << "NO" << endl; 
    } 
}