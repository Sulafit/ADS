#include <bits/stdc++.h>
using namespace std;
vector <pair<string , int>> v;
map <int , string> mp;
void rabikarp(string t, string s){

const int p = 31;
vector<long long> p_pow (max (s.length(), t.length()));
    p_pow[0] = 1;
for (size_t i=1; i<p_pow.size(); ++i)
	p_pow[i] = p_pow[i-1] * p;


vector<long long> h (t.length());
for (size_t i=0; i<t.length(); ++i)
{
	h[i] = (t[i] - 'a' + 1) * p_pow[i];
	if (i)  h[i] += h[i-1];
}

long long h_s = 0;
for (size_t i=0; i<s.length(); ++i)
	h_s += (s[i] - 'a' + 1) * p_pow[i];

int cnt = 0 ;
int mx = -999;

for (size_t i = 0; i + s.length() - 1 < t.length(); ++i)
{
	long long cur_h = h[i+s.length()-1];
	if (i)  cur_h -= h[i-1];

	if (cur_h == h_s * p_pow[i])
		cnt++;
    
}
    // mp[cnt]+=s;
    v.push_back({s, cnt});
}


int main(){
    int n;
    
    while(cin >> n){
        if( n == 0){
            break;
        }
        else {
            string arr[n];


            for(int i = 0 ; i < n; i++){
            
                cin >> arr[i];
            
            }
            string txt;
            cin >> txt;
            for(int  i = 0 ; i < n; i++){
            rabikarp(txt,arr[i]);
            }

            // map<int, string>::iterator it = mp.end();
            // map<int, string>::iterator it2 = mp.end();
            // it--;
            // it2--;
            // while(true){
                // if (it2->first != it->first) break;
                // cout << (*it).second << " ";
                // it--;
            // }
            // mp.clear();
        }


    }

    


}