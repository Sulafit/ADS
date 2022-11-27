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
    if (val < cur -> val){
         cur -> left = push (cur -> left, val);
    }
    if (val > cur -> val){
         cur -> right = push (cur -> right, val);
    }
    return cur;
    }
    BST(){
        root = NULL;
    }
    void push(int val){
        root = push(root, val);
    }        
    int r = 0;                       
    int count(node *kur){
        if(kur != NULL){
            
            count(kur ->left );
            count(kur -> right);
            r++;
        }
        return r;
        }
    void count(int k)
    {
        count(k,root);        
    }
    void count(int k,node *root){
        if(root != NULL){
            if(root->val == k){
                cout << count(root) << " ";
                
            }
            else {
                count(k, root -> left);
                count(k, root-> right);
            }
        }
    }
}
; 
int main() {
BST agash;
int n; 
cin >> n ;

while(n--){
    int l;
    cin >> l;
    agash.push(l);

}  
int k;
cin >> k;

    agash.count(k);
}

