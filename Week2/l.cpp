#include <iostream>
#include <vector>

using namespace std;
struct Node{
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this -> val = val;
        next = nullptr;
        prev = nullptr;
    }
};
int sum = 0;
int mx = -9999;

class Deque{
    int sz;
    public:
    Node* head;
    Node* tail;

    Deque(){
        sz = 0;
        head = nullptr;
        tail = nullptr;
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(!head){
            head = tail = newNode;
        }
        else{
            tail -> next = newNode;
            newNode -> prev = tail;
            tail = newNode;
        }
        ++sz;
    }
    int summa(){
        Node* cur = head;
        while(cur){
            sum += cur -> val;
            Node* cur2 = cur -> next;
            if(sum > mx){
                mx = sum;
            }
            while(cur2){
                sum += cur2 -> val;
                cur2 = cur2 -> next;
                if(sum > mx){
                    mx = sum;
                }
            }
            sum = 0;
            cur = cur -> next;
        }
        return mx;
    }
    // for(int i=0;i<n;++i){
    //     summa+=v[i];
    //     for(int j=i+1;j<n;++j){
    //         summa+=v[j];
    //     }
    //     if(summa > max){
    //         max = summa;
    //     }
    //     summa=0;
    // }
    void print(){
        Node* cur = head;
        while(cur){
            cout<<cur -> val<<" ";
            cur = cur -> next;
        }
    }
};

int main(){
    Deque dq;
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        dq.push_back(x);
        v.push_back(x);
    }
    cout<<dq.summa()<<endl;
    // cout<<dq.summa()<<endl;
    // dq.print();
    // for(int i=0;i<n;++i){
    //     sum+=v[i];
    //     for(int j=i+1;j<n;++j){
    //         sum+=v[j];
    //     }
    //     if(sum > mx){
    //         mx = sum;
    //     }
    //     sum=0;
    // }

    // cout<< mx <<endl;

}
