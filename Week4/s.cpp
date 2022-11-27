#include <iostream>
using namespace std;
struct node{
    int val;
    node* left;
    node *right;
    node(int val){
        this->val = val;
        left = right = NULL;
    }
}
;
struct BST{
    node *root;
    node *push(int val, node *cur){
        if(cur = NULL){
            return new node(val);
        }
        if(val < cur -> val) cur-> left = push(val, cur ->left);
        if(val > cur -> val) cur -> right = push(val, cur -> right);
        return cur;
    }
    BST(){
        root = NULL;
    }
    void push(int x){
       root =  push(x, root );
    }

}

int main(){
    BST bst;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        bst.push(x);

    }
}