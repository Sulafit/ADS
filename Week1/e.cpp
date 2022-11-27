#include <bits/stdc++.h>
using namespace std;
int main(){
deque <int> bt;
deque <int> nt;
for(int i = 0; i < 5; i++){
    int a;
    cin >> a ;
        bt.push_back(a);
}
for(int i = 0; i < 5; i++){
    int a;
    cin >> a;
        nt.push_back(a);
}
    int cnt  = 0;
    while(true){
        if(bt.size() == 0 || nt.size() == 0)
        {
            break;
        }

        if(cnt >= 1000000){
            cout << "Blin nichya";

        return 0 ;

        }

        if(bt.front() == 0 && nt.front() == 9)
        {
            bt.pop_front();
            nt.pop_front();
            bt.push_back(bt.front());
            bt.push_back(nt.front());        
        
        }
        else if (nt.front() == 0 && bt.front() == 9){

            nt.pop_front();
            bt.pop_front();
            
            nt.push_back(nt.front());
            nt.push_back(bt.front());
        

        }
        else if (bt.front() > nt.front() ) 
        {
            nt.pop_front();
            bt.pop_front();
            bt.push_back(bt.front());
            bt.push_back(nt.front());        
        
        }
        else if (nt.front() > bt.front() )
        { 
            nt.pop_front();
            bt.pop_front();
            nt.push_back(bt.front());
            nt.push_back(nt.front());
        }
        cnt++;
}
    if(bt.size() != 0){
        cout << "Boris"<< " ";
        
    }
    else{
        cout << "Nursik"<< " ";
    
        }
    cout << " "<< cnt;
    return 0;
}
    

        
        

    


