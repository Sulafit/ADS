#include <bits/stdc++.h>
using namespace std;
vector <pair<int,int>> ans;
int partition(int arr[],int low, int high){
    int piv = arr[high];
    int i = low-1;
    for(int j = low ; j < high; j++){
        if(arr[j] <= piv){
            i++;
            swap(arr[i], arr[j]);
        }
    }
       swap(arr[i+1], arr[high]);
       return i+1;

}
void quickSort(int arr[], int low,int high){
    if(low < high){
        int piv = partition(arr, low,high);
        quickSort(arr,low,piv-1);
        quickSort(arr, piv+1,high);
    }

}


int main(){
    int n;
    cin >>n; 
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    int least = 1e9;
    quickSort(arr,0,n-1);
    for(int i = 0 ; i< n;i++){
        if(abs(arr[i] - arr[i+1]) < least ){
            least = abs(arr[i] - arr[i+1]);
        
        ans.clear();
        ans.push_back(make_pair(arr[i], arr[i+1]));
        }
        else if(abs(arr[i] - arr[i+1] )== least){
           ans.push_back(make_pair(arr[i], arr[i+1]));
        }
        

    }
    for(int i = 0 ; i < ans.size(); i++){
        cout << ans[i].first << " " << ans[i].second<< " ";
    }
}