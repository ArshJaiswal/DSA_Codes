// #include<iostream>                     //TC - O(n)  &  SC - O(1)
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[6]={6,5,4,3,2,1};
//     int n=sizeof(arr)/sizeof(int);
//     int pivot=-1;
//     for(int i=n-2;i>=0;i--){
//         if(arr[i]<arr[i+1]){
//             pivot=i;
//             break;
//         }
//     }
//     if(pivot==-1){
//         reverse(arr,arr+n);
//     }else{
//         for(int i=n-1;i>=pivot+1;i--){
//             if(arr[i]>arr[pivot]){
//                 swap(arr[i],arr[pivot]);
//                 break;
//             }
//         }
//         reverse(arr+pivot+1,arr+n);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//We can do the above algo by just directly using next_permutation(A.begin(),A.end()) for vector
//It uses the same algo as above internally

// #include<iostream>                         //TC - O(n)  &  SC - O(1)
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v={6,5,4,3,2,1};
//     next_permutation(v.begin(),v.end());
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }