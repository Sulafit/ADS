#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

pair <int,int> binarysearch(int lx,int rx,vector <int> &v){
    pair<int, int> ans1 = make_pair(-200, -200); 
    if(v[v.size()-1] < lx || v[0] > rx){
        return ans1;
    }
    int l = -1;
    int r = v.size()-1;
    while(l + 1 < r){
        unsigned int mid = (l + r) / 2;
        if(v[mid] >= lx) r = mid;
        else l = mid;
    }
    ans1.first = r;
    // cout<<index1<<endl;
    l = 0, r = v.size();
    while(l + 1 < r){
        int mid = (l + r) / 2;
        if(v[mid] <= rx) l = mid;
        else r = mid;
    }
    ans1.second = l;
    // cout<<index2<<endl;
    // return abs(index2 - index1);
    return ans1;
}
int main(){
    vector <int> v;
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<q;++i){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        pair<int, int> firstRange = binarysearch(l1, r1, v); 
        pair<int, int> secondRange = binarysearch(l2, r2, v); 
        int ans = 0;
        ans += max(0, firstRange.second - firstRange.first + 1); 
        ans += max(0, secondRange.second - secondRange.first + 1); 
        if(firstRange.second >= secondRange.second && firstRange.first <= secondRange.first) 
            ans -= max(0, secondRange.second - secondRange.first + 1); 
        else if(secondRange.second >= firstRange.second && secondRange.first <= firstRange.first) 
            ans -= max(0, firstRange.second - firstRange.first + 1); 
        else if(firstRange.first <= secondRange.first && firstRange.second >= secondRange.first) 
            ans -= max(0, firstRange.second - secondRange.first + 1); 
        else if(secondRange.first <= firstRange.first && secondRange.second >= firstRange.first) 
            ans -= max(0, secondRange.second - firstRange.first + 1); 
        cout << ans << endl; 
    }
}
