#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=nullptr;
    }
};
int main(){
    Node* root=new Node(5);
    root->next=new Node(6);
    while(root!=nullptr){
        cout<<root->data<<" ";
        root=root->next;
    }
    return 0;
}
