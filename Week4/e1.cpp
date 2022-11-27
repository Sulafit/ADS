#include <iostream>
#include <cmath>
#include <set>
using namespace std;
struct node{
    int val;
    node *left;
    node *right;
 node(int val){
    this-> val = val;
    left = right = NULL;
 }
}
;
int arr[1000];
class BST{
    public:
    node *root;
    node *push(int val,node *cur){
        if(cur == NULL){
            return new node(val);
        }
        else{
            if(val < cur -> val){
                cur -> left = push(val,cur -> left);

            }
            if(val > cur -> val){
                cur -> right = push(val,cur -> right);
            }
            return cur;
        }
    }
        
    BST(){
        root = NULL;
    }
    void push(int val){
        root = push(val,root);
    }
    set <int> s;
    void count_lev(node *root,int cnt ){
        
        arr[cnt] += 1;
        if(root->left !=NULL){
            count_lev(root -> left,cnt+1);
        }
        if(root->right !=NULL){
            count_lev(root -> right,cnt+1);
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
bst.count_lev(bst.root,0);
cout << bst.s.size();
for(int i = 0; i < bst.s.size(); i++){
    cout << arr[i] << " ";
}

}