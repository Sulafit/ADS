#include <bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node *next;


    node(){}
    node(int val){
        this -> val = val;
        this -> next = NULL;

}
}
;
struct LinkedList{
    node *head;
    node *tail;
    LinkedList()
    {
        this -> head = NULL; 
        this -> tail = NULL;
    }
    


    void push_back(int val){
        node *temp = new node(val);

        if(this -> head ==  NULL){
            this -> head = temp;
            this -> tail = temp;
        }
        else{
            this -> tail -> next = temp;
            this -> tail = temp;
        }
        
}
;

    int push_to(int data, int pos)
    {
        node *tmp = new node(data);
        node *cur = this -> head;

    
        while(pos --){
            
            if(pos==0){
            tmp -> next = cur ->next;
            cur -> next = tmp;
            }
            cur = cur -> next;
            
        }
        }

        ;
    void insertAtBeginning( int val){
        node *tmp = new node(val);
        tmp->next = this -> head;
        this-> head = tmp;
}
    ;
    void insertatEnd(int dt){
        node *tmp  = new node(dt);
        this -> tail -> next = tmp;
        tmp = tail;

    }
    void print(){
        
        node* v = this -> head;
        
        while(v != NULL)
        {
            cout << v -> val << " ";

           v = v -> next;
        } 
        
    }
}

;
int main()  {
LinkedList *ll = new LinkedList();
    int n;
    cin >> n;

for(int i = 0 ; i <n; i++){
    int b;
    cin >> b;
    ll -> push_back(b);
}
    int dt;
    cin >> dt;
    int pos;
    cin >> pos;
    if(pos == 0){
    ll-> insertAtBeginning(dt);
    }
    else if(pos == n){
    ll -> insertatEnd(dt);
    }
    else{
    ll->push_to(dt,pos);
    }
    ll->print();

}

