#include <iostream>
using namespace std;
int main(){
    int a , b;
    cin >> a >> b;
    int sum;
    sum = a/b;
    if(a%b !=0){
        sum+=1;
    }
    cout << sum;
    
}