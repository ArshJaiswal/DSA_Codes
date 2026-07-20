// Kahn's Algorithm
//For Cycle Detection
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// vector<int> kahnAlgo(int V,vector<vector<int>>&adj){
//     vector<int> indegree(V,0);
//     for(int i=0;i<V;i++){
//         for(int it:adj[i]){
//             indegree[it]++;
//         }
//     }

//     queue<int> q;
//     for(int i=0;i<V;i++){
//         if(indegree[i]==0){
//             q.push(i);
//         }
//     }

//     vector<int>  topo;

//     while(!q.empty()){
//         int node=q.front();
//         q.pop();
//         topo.push_back(node);
//         for(int it: adj[node]){
//             indegree[it]--;
//             if(indegree[it]==0){
//                 q.push(it);
//             }
//         }
//     }
//     return topo;
// }
// int main(){
//     int V, E;
//     cin >> V >> E;

//     vector<vector<int>> adj(V);

//     for (int i = 0; i < E; i++) {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//     }

//     vector<int> ans = kahnAlgo(V, adj);

//     if (ans.size() != V) {
//         cout << "Cycle Detected\n";
//     } else {
//         cout << "Topological Order: ";
//         for (int x : ans) {
//             cout << x << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



//leetcode 207 
// class Solution {
// public:
//     bool canFinish(int C, vector<vector<int>>& prer) {

//         vector<vector<int>> adj(C);
//         vector<int> indegree(C,0);

//         for(int i=0;i<prer.size();i++){
//             int course = prer[i][0];
//             int pre = prer[i][1];

//             adj[pre].push_back(course);
//             indegree[course]++;
//         }

//         queue<int> q;
//         for(int i=0;i<C;i++){
//             if(indegree[i]==0){
//                 q.push(i);
//             }
//         }

//         vector<int> topo;

//         while(!q.empty()){
//             int node=q.front();
//             q.pop();

//             topo.push_back(node);

//             for(int it:adj[node]){
//                 indegree[it]--;

//                 if(indegree[it]==0){
//                     q.push(it);
//                 }
//             }
//         }

//         return topo.size()==C;
//     }
// };

