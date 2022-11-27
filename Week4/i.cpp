#include <bits/stdc++.h>
using namespace std;
bool ok = false;

struct node{
    int val;
    int cnt;
    node *left;
    node *right;
    node(int val){
        this -> val = val;
        left = right = NULL;
        this->cnt = 1;
    }
}
;

struct BST{
    node *root;
    node *push(int val, node *cur){
        if(cur == NULL){
            return new node(val);
            
        }
        if(val == cur->val){
            cur ->cnt++;
            return cur;
        }
        
        if(val < cur -> val) cur -> left = push(val,cur -> left);
        if(val > cur -> val) cur -> right = push(val,cur->right);
        return cur;
        }
    BST(){
        root = NULL;
    }
    void push(int val){
        root = push(val,root);
    }

    void delete_el(int num, node *cur){
        if(cur){
        if(cur -> val == num){
            if(cur -> cnt >= 0 ){
                cur -> cnt--;
            }
        
        }
        delete_el(num,cur->left);
        delete_el(num,cur-> right);
        
        }
    }
    
    void delete_el(int k){
       delete_el(k,root);
    }

    void count(int val, node *cur){
        if(cur){
        if(val == cur -> val){
            ok = true;
            
            if(cur ->cnt >= 0){
                cout << cur -> cnt << endl;
            }

        }
    
        count(val,cur->left);
        count(val,cur ->right);
        }
    }
    void count(int val){
        count(val,root);
        }
        
    }
;
int main(){
    BST bst;

    int n;
    cin >> n;

    while(n--){
        string s;
        int k;
        cin >> s >> k;
        if(s == "insert"){
            bst.push(k);
            
        }
        if(s == "delete"){
                bst.delete_el(k);
            
        }
        if(s == "cnt"){
            ok = false;
            bst.count(k);
             if(!ok){
                 cout << 0 << endl;
                 ok = false;
             }
        }

    }

}