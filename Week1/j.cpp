#include <bits/stdc++.h>
using namespace std;
int main(){
    char a;
    int b;
    deque <int> deq;
    bool t = true;
    while(t){
        cin >> a;
        if(a == '+'){
            cin >> b;
            deq.push_front(b);
        }
        if(a == '-'){
            cin >> b;
            deq.push_back(b);

        }
        if(a == '*'){
            if(!deq.empty()){
                if(deq.size() ==1 ){
                cout << deq.front()+ deq.back()<<endl;
                deq.pop_back();
                }
                else
                {
                    cout << deq.front()+ deq.back()<<endl;
                    deq.pop_front();
                    deq.pop_back();
                }
        }
            else 
            {
                cout << "error" << endl;
            }
        }
        
        if(a == '!')
        {
        t = false;
        }

}
}