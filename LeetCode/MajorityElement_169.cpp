//Optimized Brute Force Method
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[9]={8,4,4,2,3,4,4,7,4};
//     int n=sizeof(arr)/sizeof(int);
//     sort(arr,arr+n);                          //To sort an array
//     int t=arr[0],freq=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==t){
//             freq++;
//             if(freq>n/2){
//                 cout<<t;
//                 return 0;
//             }
//         }else{
//             t=arr[i];
//             freq=1;
//         }
//     }
//     return 0;
// }

//Using Boyer–Moore Voting Algorithm(Optimal Solution)
// 🧠 Core Idea (Intuition)
// 👉 If an element appears more than n/2 times, it will survive cancellation against all other elements.
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int nums[10] = {2,3,2,1,2,2,2,3,4,2};
//     int n=10,freq=0,ans=0;
//         for(int i=0;i<n;i++){
//             if(freq==0){
//                 ans=nums[i];
//             }
//             if(ans==nums[i]){
//                 freq++;
//             }else{
//                 freq--;
//             }
//         }
//         cout<<ans;
//         return 0;
// }



