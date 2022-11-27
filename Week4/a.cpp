#include <iostream>
#include <cmath>

using namespace std;
struct node{
    int val;
    node* left;
    node* right;
    node(int val){
        this -> val = val;
        left = right = NULL;
    }
}
;
class BST{
public:
    node *root;
    node *push(node *cur,int val){
        if(cur == NULL){
            return new node(val);
        }
    
    if (val < cur -> val) cur -> left = push (cur -> left, val);
    if (val > cur -> val) cur -> right = push (cur -> right, val);
    return cur;
    }
    BST(){
        root = NULL;
    }
    void push(int val){
        root = push(root, val);
    }                               
    void check_string(string s, int i, node *kur){
        if(kur == NULL){
            cout << "NO" <<endl;
            return;
        }
        if(i == s.size()){
            cout << "YES"<< endl;
            return;
        }
        if(s[i] == 'L'){
            check_string(s,i+1,kur->left);
        }
        if(s[i] == 'R'){
            check_string(s,i+1,kur->right);
        }
    }
    void check_string(string s){
        check_string(s,0,root);
    }
}
; 
int main() {
BST agash;
int n , k; 
cin >> n >> k;
int arr[n];
while(n--){
    int l;
    cin >> l;
    agash.push(l);
}  
for(int j =0;j < k;j++){
    string s;
    cin >> s;
    agash.check_string(s);
}
}
