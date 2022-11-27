#include <iostream>
#include <cmath>
using namespace std;
struct node{
    int val ;
    node *left;
    node *right;
node(int val){
    this -> val = val;
    left = right  = NULL;

}
}
;
class BST{
    public:
    node *root;
    node *push(int val,node *cur){
        if(cur == NULL){
            return  new node(val);
        }
        else{
            if(val < cur -> val){
                cur -> left = push(val,cur -> left);
            }
            if(val > cur -> val){
                cur -> right = push(val,cur ->right);

            }
            return cur;

        }
        return cur;
    }
    BST(){
        root = NULL;
    }
    void push(int x){
        root = push(x,root);
    }
    int subtree(node *cur){
        if(cur != NULL){
            cout << cur -> val << " ";
            subtree(cur ->left);
            subtree(cur -> right);
        }
    }
    void subtree(int k){
        subtree( k, root);
    }
    void subtree(int k, node *cur){
        if(cur != NULL){
            if(cur -> val == k){
                subtree(cur);
            }
            else{
                subtree( k, cur ->left);
                subtree(k, cur ->right);
            }
        }

    }
    
}
;

int main(){
    BST bst;
int n;
cin >> n;
while(n--){
    int l;
    cin >> l;
    bst.push(l);

}
int k;
cin >> k;
bst.subtree(k);
}