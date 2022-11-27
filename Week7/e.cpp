#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second > p2.second)return true;
    if(p1.second )
    return false;
}
void sortirovka(vector<pair<int,int>> &v){
    sort(v.begin(),v.end(),cmp);
}
void merge(vector<pair<int, int>> &sums, int low, int mid, int high){
    int i , j , k;
    int n1 = mid - low +1;
    int n2 = high - mid;
    vector <pair<int,int>> L(n1);
    vector <pair<int , int>> R(n2);
    
    for(int i = 0 ; i < n1; i++){
        L.push_back(make_pair(sums[low+ i].first ,sums[low +i].first )) ;
    }
    for(int i = 0 ; i< n2;i++){
        R.push_back(make_pair(sums[mid +1 +i].first,sums[mid +1 +i].second));
    }
    i = 0;
    j = 0;
    k = low;
    while(i < n1 && j < n2){
        if(L[i].first <= R[j].first){
            sums[k].first = L[i].first;
             sums[k].second = L[i].second;
            i++;
        }
        else {
            sums[k].first = R[j].first;
             sums[k].second = R[j].second;
            j++;
        }
        k++;
    }
    while(i < n1){
        sums[k] = L[i];
        sums[k].second = L[i].second;
        i++;
        k++;
    }
    while(j < n2){
        sums[k] = R[j];
        sums[k].second = R[j].second;
        j++;
         k++;
    }

}
void mergeSort(vector <pair<int,int>> &sums, int low, int high ){
    if(low < high){
        int mid = (low +high)/2;
        mergeSort(sums, low, mid);
        mergeSort(sums,mid+1,high);
        merge(sums, low,mid , high);

    }
}
int main(){
    
    int n ,m;
    cin >> n >> m;
    
    int arr[n][m];
    vector <pair<int,int>> sums;
    for(int i  = 0 ; i < n;i++){
        int sum = 0;
        
        for(int j = 0 ; j < m; j++){
            cin >> arr[i][j];
        
            sum += arr[i][j];
            
        }
        sums.push_back(make_pair(i,sum));
    }
    sortirovka(sums);

     int temp[n][m];
    for(int i = 0; i < n; i++){
        for(int j =0; j < m;j++){
            temp[i][j] = arr[sums[i].first][j];
        }
    }
    
    for(int h = 0; h < n; h++){
        for(int a = 0 ; a < m;a++){

            for(int l=h+1;l<n;l++){

                if(sums[h].second <= sums[l].second){

                    if(temp[h][0] < temp[l][0])

                        h++;

                    if(temp[h][a]>temp[l][a]){

                        for(int k = 0; k < m;k++){

                            long long tp;

                            tp = temp[l][k];

                            temp[l][k] = temp[h][k];

                            temp[h][k] = tp;

                        }
                    }
                }
            }
        }
    
    }
    for(int h = 0; h < n; h++){

        for(int a = 0 ; a < m;a++){
            
            cout << temp[h][a] << " ";
        }
        cout << endl;
        }
}