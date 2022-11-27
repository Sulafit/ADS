#include <iostream>
#include <cmath>
using namespace std;

struct node{
    int val ;
    node *left;
    node *right;
    node(int val){
        this -> val = val;
        left =  right = NULL;

    }
}
;
struct BST{
    node *root;
   
    node *push(int val, node* cur){
        if(cur == NULL){
            return new node(val);
        }
        if(val < cur-> val) cur -> left = push( val, cur -> left);
        if(val > cur -> val) cur -> right = push(val,cur -> right);
        return cur;
    }
     BST(){
        root = NULL;
    }
    void push(int val){
        root = push(val, root);
    }
    
    int numof_subtrees(node *cur){
        if(cur==NULL){
            return 0;
        }
        
        
        
        if(cur ->left !=NULL && cur ->right!=NULL){
            // return 1 ;
            return  1 + numof_subtrees(cur ->left) + numof_subtrees(cur -> right);
        }
        
        return numof_subtrees(cur ->left) + numof_subtrees(cur -> right);
        
      
        
    }        
    
    // void numof_subtrees(){
    //    cout << numof_subtrees(root);
    // }
}
;
int main(){
    BST bst;
    int n; 
    cin >> n;

    while(n--){
        int k ;
        cin >> k;
        bst.push(k);
    }
     cout<< bst.numof_subtrees(bst.root);
}