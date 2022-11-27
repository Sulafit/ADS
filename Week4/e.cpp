#include <bits/stdc++.h>
using namespace std;
int arr[1000];
int mx = -999;
struct node{
    int val ;
    node *left;
    node *right;

    node(int val){
        this->val = val;
        left = right = NULL;

    }
}
;
vector <int > v;
struct BST{
    node *root ;

    //  BST(){
    //     root = NULL;
    // }
    int cnt = 0;
     node *push(int val,node *root,int par,int pos){
         if(root == NULL ){
            
             return new node(val);
     }
        
             if(root -> val == par and pos == 0 )
             {
                 root ->left = push(val,root->left,root ->val,pos);
                 
             }
             if(root -> val == par and pos ==1){
                 root ->right = push(val,root ->right,root -> val,pos);
             }
            push(val,root -> left,par,pos);
            push(val,root -> right,par,pos);
            return root;
            

    
     }
     
    
   
     BST(){
        root = NULL;
    }
    void push(int x, int y,int z){
         root = push(y,root,x,z);
     }
     
    
    // void print(node* cur){
    //     if(cur==NULL){
    //         return;
    //     }
    //     cout << cur -> val<< " ";

    //     print(cur -> left);
       
    //     print(cur -> right);
        

    // }
    // void print(){
    //     print(root);
    // }
    set <int> s;
    int count(node *cur ,int cnt ){
         if(cur ==NULL){
             return 0;
         }
         arr[cnt] +=1;
         count(cur -> left,cnt+1);
         count(cur -> right,cnt+1); 
             
         

        //  return  count (cur -> left) + count(cur -> right) ;
        //  if(l> r){
        
        //      return(l+1);

        //  }
        //  else{
            
        //  return(r+1);
        //  }
      }
    void count(){
         count(root , 0);
      }

    
}
;
int main(){
    BST bst;
    int n;
   
    cin >> n;
    bst.root = new node(1);
    for(int i = 0 ; i < n-1;i++){
        int x,y,z;
        cin >> x >> y >> z;
        bst.push(x,y,z);
    }
    
    bst.count();
    for(int i =0; i < 100;i++){
        if(arr[i] > mx){
            mx = arr[i];
        }
        
    }
    cout << mx;
}
