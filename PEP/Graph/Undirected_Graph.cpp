//Cycle Detection in Undirected Graph
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// bool bfs(int start,vector<vector<int>> &adj,vector<int>&visited){
//     visited[start]=1;
//     queue<pair<int,int>>q;
//     q.push({start,-1});
//     while(!q.empty()){
//         int child=q.front().first;
//         int parent=q.front().second;
//         q.pop();
//         for(auto temp:adj[child]){
//             if(visited[temp]==0){
//                 visited[temp]=1;
//                 q.push({temp,child});
//             }else if(temp!=parent)
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int v,e;
//     cin>>v>>e;
//     vector<vector<int>> adj(v);
//     for(int i=0;i<e;i++){
//         int a,b;
//         cin>>a,b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }
//     vector<int>visited(v,0);
//     for(int i=0;i<v;i++){
//         if(visited[i]==0){
//             if(bfs(i,adj,visited)){
//                 cout<<"Cycle detected"<<endl;
//                 return 0;
//             }
//         }
//     }
//     cout<<"No cycle in graph"<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data=val;
//         left=nullptr;
//         right=nullptr;
//     }
// };
// void preorder(Node* root){
//     if(root==nullptr){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void postorder(Node* root){
//     if(root==nullptr){
//         return;
//     }
//     preorder(root->left);
//     preorder(root->right);
//     cout<<root->data<<" ";
// }
// void inorder(Node* root){
//     if(root==nullptr){
//         return;
//     }
//     preorder(root->left);
//     cout<<root->data<<" ";
//     preorder(root->right);
// }
// int main(){
//     Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     preorder(root);
//     cout<<endl;
//     inorder(root);
//     cout<<endl;
//     postorder(root);
//     return 0;
// }

