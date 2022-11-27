#include <bits/stdc++.h>
using namespace std;
struct node{
    int val ;
    int knt;
    node *next;

    node(){}
    node(int val){
       this -> val = val; 
       this -> next = NULL;
       this -> knt =1;
    }
    }

;
struct LinkedLIst{
    node *head;
    node *tail;

    LinkedLIst(){
        this -> head = NULL;
        this -> tail = NULL;
    }
    

    void push_back(int x){
        node* tmp = new node(x);
        if(this -> head == NULL){
            this -> head = tmp;
            this -> tail = tmp;
        }
        else{
            this -> tail -> next =  tmp ;
            this ->tail = tmp;
        }
    }
    ;    
        int max = -99;
        int cnt = 0;
    void count_mode(int val){
        node *tmp = this -> head;
        int max = -99;
        int cnt = 0;
        while(tmp ->next) {
            if(tmp->val == val){
                cnt++;
            }
            tmp = tmp ->next;
    }
        tmp ->knt +=cnt;
    }
    
int maxn = -1;
vector <int> v;
void find_max(){
    node *tmp = head;
    while(tmp){
        if(tmp->knt > maxn){
            maxn = tmp->knt; 
        }
        tmp  = tmp->next;
    }
}

void fill_vector(){
    node *tmp = head;
    while(tmp){
        if(tmp->knt == maxn){
            v.push_back(tmp->val);
        }
        tmp = tmp->next;
    }
}

    void print(){
        sort(v.rbegin(),v.rend());
        for(int i = 0; i < v.size();i++){
            cout << v[i]<< " ";
        }
        }
    }

;

int main(){
    LinkedLIst *ll = new LinkedLIst();
    int n; 
    cin >> n;
    for(int i = 0 ; i < n; i++){
        int el;
        cin >> el;
        ll-> push_back(el);
        ll -> count_mode(el);
    }
    
    ll->find_max();
    ll-> fill_vector();
    ll-> print();
}