#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *next;
    Node(){}
    Node(int val){
        this -> val = val;
        this -> next = NULL; 
    }

}
;
struct LinkedList{
    Node *head;
    Node *tail;
    LinkedList(){
        this -> head = NULL;
        this -> tail = NULL;
    }

    void fill(int b){
        Node *tmp = new Node(b);
        if(this -> head  == NULL){
            this -> head = tmp;
            
            this -> tail = tmp;
            cout << tmp-> val << " ";
        }
        else{
            this -> tail -> next = tmp;
            this -> tail = tmp; 
            cout << tmp -> val << " ";
        }
    }
    // int scan(){
    //     Node *v = head;
    //     while(v-> val != 0){
            
    //         cout << v->val <<" ";
            
    //         v = v -> next ;
    //         }
            
    //     }
    }
;

int main(){
    LinkedList *ll= new LinkedList();
    int n;
    cin >> n;
    for(int i = 1; i <=n; i++){
        int b;
        cin >> b;
    
        if(i % 2 !=0){
        ll -> fill(b);
    }
    }
    //ll -> scan();


}