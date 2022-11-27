

#include <bits/stdc++.h>
#define fori(n) for(int i=0;i<n;i++)
#define forj(m) for(int j=0;j<m;j++)
using namespace std;

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for(i = 0; i < n1; i++){
        L[i] = arr[l + i];
        
    }
    for(i = 0; i < n2; i++){
        R[i] = arr[m + 1 + i];
    }

    i = 0;
    j = 0;
    k = l;

    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[], int l, int r){
    if(l < r){
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void mergesort(string s[], int n)
{
    for (int i=1 ;i<n; i++)
    {
        string temp = s[i];
 
        int j = i - 1;
        while (j >= 0 && temp.length() < s[j].length())
        {
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = temp;
    }
}

int main()
{
    int n;
    cin>>n;
    string dorozhka;

    string t;
    
    deque<deque<string>> deqdeq;
    
    for(int i = 0; i<n+1; i++){
  
        getline(cin, dorozhka);
        deque<string> deq; 

        if(i == 0) continue;

        stringstream x(dorozhka);

        while (getline(x, t, ' ')) {

            deq.push_back(t);
        }
        deqdeq.push_back(deq);
    }
    
    fori( deqdeq.size()){
        string str[deqdeq[i].size()];
        forj(deqdeq[i].size()){ str[j] = deqdeq[i][j];
        }
        int nn = sizeof(str)/sizeof(str[0]);
        mergesort(str, nn);
        forj(deqdeq[i].size()){cout<<str[j]<<" ";}
        cout<<endl;
    }
  
}
