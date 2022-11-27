#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];

    }
    int a,b;
    cin >> a >> b;
    int brr[a][b];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b;j++){
            cin >> brr[i][j];
        }
    }

    for(int k = 0 ; k < n; k++){
        bool find = false;

            for(int j =0; j < a;j++){
                if(j%2 ==0){
                int left = 0 ;int right = b-1;

                    while(left <=right ){  

                    if(find ){
                            break;
                        }

                    int mid  = left + (right - left)/2;
                    if(brr[j][mid] > arr[k])left = mid +1;
                    else if(brr[j][mid] < arr[k])right = mid -1;
                    else{
                        cout << j << " " << mid<< endl;
                        find = true;
                        break;
                    }
                    }

                }
                if(j %2 != 0) {
                int left = 0 ;int right = b-1;

                    while(left <=right ){
                    if(find ){
                        break;
                    }

                    int mid  = left +(right - left)/2;
                    if(brr[j][mid] < arr[k])left = mid +1;
                    else if(brr[j][mid] >  arr[k])right = mid -1;
                    else{
                        cout << j << " " << mid<< endl;
                        find = true;
                }
            }
            
        }

    }
            if(!find) cout << -1 << endl;
        }
    
    }
    // 21B030851
        
        


 