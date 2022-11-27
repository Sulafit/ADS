#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin >> s;
stack <char> st;
for(int i = 0; i < s.size(); i++){

    if(st.size() == 0 || st.top() != s[i]){
        st.push(s[i]);
    }

    else st.pop();
    }


if(st.size() == 0)
{
cout << "YES";
}

else cout << "NO";
}
