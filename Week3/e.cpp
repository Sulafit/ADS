#include <bits/stdc++.h>
using namespace std;
    int binary_search(vector <vector<int>> v ,int mid){
        int cnt =0;
        for(int i =0 ; i< v.size();i++){
            if(v[i][0] <= mid and v[i][1] <= mid and v[i][2] <=mid and v[i][3] <= mid){
            cnt++;
            }

        }
        
        return cnt;


    }
    int main(){
    int n, k ;
    cin >> n >> k;
    vector <vector<int>> v;
        for(int i =0 ; i< n;i++){
            vector <int> v1;
            int l1,r1,l2,r2;
            cin >> l1 >> r1 >> l2 >> r2;
            v1.push_back(l1);
            v1.push_back(r1);
            v1.push_back(l2);
            v1.push_back(r2);
            v.push_back(v1);
        }
        int l = 0;
        int r = 1e9;
        while(l+1 < r){
            int mid = (l+r)/2;
            if(binary_search(v,mid) >= k)
            {
                r = mid;
                // cout << r<<endl ;
            }
            else l = mid;

        }
         cout << r<< endl;
        
}
    
    
    
