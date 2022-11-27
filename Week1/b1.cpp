#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    stack<int>st;
    for(int i=0;i<n;i++){
        if(st.empty()){
            cout << -1<< " ";
            st.push(a[i]);
        }
        else{
            while(!st.empty()){
                if(st.top() < a[i]){
                
                    cout << st.top() << " ";
                    break;
                }

                else{
                    
                    cout << st.top() << " ";
                    
                    st.push(a[i]);
                    st.pop();
                    break;
                }
            }
            st.push(a[i] );
        }
    }

}