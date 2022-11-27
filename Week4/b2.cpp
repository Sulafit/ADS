#include <iostream>
#include <cmath>
#include  <set>
using namespace std;
struct node{
    int val;
    node *left;
    node *right;

 node(int val){
    this -> val = val;
    left = right = NULL;
}
}
;
int arr[1000];
class BST{
    public :
    node *root;
    node *push(node *cur, int val){
        if(cur== NULL){
            return new node(val);
        }
        else{
            if(val < cur -> val){
                cur ->left = push(cur -> left,val);
            }
            if(val > cur -> val){
                cur -> right = push(cur -> right, val);
            }
            return cur;
        }

    }
    BST(){
        root = NULL;
    }
    void push(int val){
        root = push(root,val);
    }
     set <int> s;
    int count(node *kur,int cnt){
        s.insert(cnt);
        
        arr[cnt] +=kur -> val;


        if(kur ->left  != NULL){
        
            count(kur ->left,cnt+1);
        }
         
        if(kur ->right != NULL){
            count(kur -> right,cnt+1);
        }
        
        
        }

        
        
    }
    // void count(int k, node * cur){
    //     if(cur != NULL){
            
    //              count(cur);
            
            
                // count(k,cur -> left);
                // count(k,cur->right);
            
    //     }
    // }

;
int main(){
    BST bst;
    int n,k; 
    cin >> n;
    while(n--){
        int l;
        cin >> l;
        bst.push(l);
    }
    
     bst.count(bst.root,0);
     cout << bst.s.size() << endl;
    for(int i =0 ; i< bst.s.size();i++){
        cout << arr[i] << " ";
    }
    
    // cout << n;
    
    


}