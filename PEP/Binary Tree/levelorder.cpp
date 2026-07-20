//Level Order Traversal(BFS)
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;

    Node(int data){
        val=data;
        left=nullptr;
        right=nullptr;
    }
};
void levelorder(Node* root){
    if(root==nullptr){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        vector<int>temp;
        int n=q.size();
        while(n--){
            Node* curr=q.front();
            temp.push_back(curr->val);
            cout<<curr->val<<" ";
            q.pop();
            if(curr->left!=nullptr){
                q.push(curr->left);
            }
            if(curr->right!=nullptr){
                q.push(curr->right);
            }
        }
        cout<<endl;
    }
}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    levelorder(root);
    return 0;
}


