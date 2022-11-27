#include <bits/stdc++.h>
using namespace std;
struct node{
    string val;
    node *next;

    node(){}
    node(string val){
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
    


    void p_back(string soz){
        node *temp = new node(soz);

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

    int p_back_string(int k){
        while(k--)
        {
            node *tmp  = head;
            head = head -> next;
            tmp -> next = NULL;
            tail-> next = tmp; // <- add to end of list
            tail = tmp;
            
        //     while( this -> head -> next != NULL){
        //         head = this-> head -> next;
        //         tmp -> next  = NULL;

        // }
        //     tail -> next = tmp;
        //     tail = tmp;

    }
    }

    void print(int n){
        
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
    int k;
    cin >> n >> k;

for(int i = 1 ; i <=n; i++){
    string b;
    cin >> b;
    ll -> p_back(b);
}
    ll-> p_back_string(k);

    ll-> print(n);
}
