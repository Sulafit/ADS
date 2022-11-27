#include <bits/stdc++.h>
  
using namespace std;

struct Node{
	Node * prev;
	Node * next;
	string val;
	Node(string _val){
		prev = NULL;
		next = NULL;
		val = _val;
	}	
};

Node * head = NULL;
Node * tail = NULL;
int cnt;
void add_back(string s){
    Node *tmp = new Node(s);
    if(head == NULL and tail == NULL){
        head = tmp;
        tail = tmp;
        cnt++;
        }
    else{
        tail -> next = tmp;
        tail = tmp;
        cnt++;
    }
}
void add_front(string s){
    Node *tmp = new Node(s);
    if(head == NULL or tail == NULL){
        head = tmp;
        tail = tmp;
        
        }
    else{
        tmp -> next = head;
        head = tmp;
        
    }
    cnt++;
}
bool empty(){ 
    if( cnt==0){
       return true;
    }
    else 
        return false;

}
void erase_front(){
    Node *del = head; 
    head =head ->next;
    delete del;
    cnt--;

}
void erase_back(){
    Node *del = tail;
    tail = tail -> prev;
    
    delete del;
    cnt--;

}
string front(){
    return head ->val;

}
string back(){
    return tail -> val;

}
void clear(){

    cnt = 0;
    }

  
int main()
{
	string s;
   	while(cin >> s){
   		if(s == "add_front"){
   			string t;
   			cin >> t;
   			add_front(t);
   			cout << "ok" << endl;
   		}
   		if(s == "add_back"){
   			string t;
   			cin >> t;
   			add_back(t);
   			cout << "ok" << endl;
   		}
   		if(s == "erase_front"){
   			if(empty()){
   				cout << "error" << endl;
   			}
   			else
   			{
   				cout << front() << endl;
   				erase_front();
   			}
   		}
   		if(s == "erase_back"){
   			if(empty()){
   				cout << "error" << endl;
   			}
   			else{
   				cout << back() << endl;
   				erase_back();
   			}
   		}
   		if(s == "front"){
   			if(empty()){
   				cout << "error" << endl;
   			}
   			else{
   				cout << front() << endl;
   			}
   		}
   		if(s == "back"){
   			if(empty()){
   				cout << "error" << endl;
   			}
   			else{
   				cout << back() << endl;
   			}
   		}
   		if(s == "clear"){
   			clear();
   			cout << "ok" << endl;
          
   		}
   		if(s == "exit"){
   			cout << "goodbye" << endl;
   			break;
   		}
   		// cout << "hi" << endl;
   	}
    return 0;
}