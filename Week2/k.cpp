#include <iostream>
using namespace std;
struct Node{
    char val;
    int cnt;
    Node* next;
    Node* prev;
    Node(char v){
        val = v;
        cnt = 1;
        next = nullptr;
        prev = nullptr;
    }
    
};

int mn = 9999;

class LinkedList{
    Node* head;
    public:
        LinkedList(){
            head = nullptr;
        }
    void pushback(char val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = newNode;
        }
        else{
            Node* cur = head;
            while(cur){
                if(cur -> val == val){
                    cur -> cnt ++;
                    break;
                }
                if(!cur -> next){
                    cur -> next = newNode;
                    newNode -> prev = cur ;
                    break;
                }
                cur = cur -> next;
            }
        }
        print();
    }
    void print(){
        Node* cur = head;
        while(cur){
            if(cur -> cnt == 1){
                cout << cur -> val <<" ";
                return;
            }
            cur = cur -> next;
        }
        cout<<-1<<" ";
    }
};


int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;++i){
        LinkedList dq;
        int x;
        cin>>x;
        for(int j=0;j<x;++j){
            char b;
            cin>>b;
            dq.pushback(b);
        }
        cout<<endl;

    
    }
}