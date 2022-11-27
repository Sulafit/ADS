#include <bits/stdc++.h>
using namespace std;
int sum = 0;

struct node{
    int val;
    node *left;
    node *right;
    node(int val){
        this->val = val;
        left = right = NULL;
    }
}
;
struct BST{
    node *root;
    node *push(int val,node *cur){
        if(cur == NULL){
            return new node(val);

        }
        else{
            if(val < cur-> val) cur->left = push(val,cur->left);
            if(val > cur -> val) cur -> right = push(val, cur->right);
            return cur;

        }

    }
    BST(){
        root = NULL;
    }
    void push(int val){
        root = push(val , root);
    }
 
    void greatersum(node *cur){
        if(!cur){
            return ;
        }
        
        greatersum(cur -> right);
        sum += cur->val;
        cout << sum<< " ";
        
        greatersum(cur -> left);
     
    
    
    }
    void greatersum(){
        greatersum(root);
    }

}

;

int main(){
    BST bst;
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++){
        int d;
        cin >> d;
        bst.push(d);
    }
    bst.greatersum();
}