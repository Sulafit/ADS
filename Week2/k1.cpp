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
    void print(){
        node *cur = this->head;
        while(cur!=NULL){
            cout << cur->val << " ";
            cur = cur -> next;
        }
    }
}
;
    
int main()  {
    LinkedList *ll = new LinkedList();
    int n;
    cin >> n;

for(int i = 0 ; i <n; i++){
    int b,j;
    cin >> b;
    if(b==1){
        cin >> j;
    ll -> push_back(j);
    }
    if(b==2){
        cout << "OK" << endl;
    }
}
ll->print();
    

}