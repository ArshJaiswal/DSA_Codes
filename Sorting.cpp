#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
//BUBBLE SORT                                  TIME COMPLEXITY- O(n^2)
// void bubbleSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         bool isSwap=false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 isSwap=true;
//             }
//         }
//         if(!isSwap){
//             break;
//         }
//     }
// }
//SELECTION SORT                               TIME COMPLEXITY- O(n^2)                    
// void selectionSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int ind=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[ind]){
//                 ind=j;
//             }
//         }
//         swap(arr[i],arr[ind]);
//     }
// }

// void selectionSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int ind=0;
//         int minV=INT_MAX;
//         for(int j=i;j<n;j++){
//             if(arr[j]<minV){
//                 minV=arr[j];
//                 ind=j;
//             }
//         }
//         swap(arr[i],arr[ind]);
//     }
// }

//INSERTION SORT                              TIME COMPLEXITY- O(n^2)
// void insertionSort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int curr=arr[i];
//         int prev=i-1;
//         while(prev>=0 && arr[prev]>curr){
//             arr[prev+1]=arr[prev];
//             prev--;
//         }
//         arr[prev+1]=curr;
//     }
// }
//For descending order just change the comparison statement
// int main(){
//     int arr[5]={4,1,5,2,3};
//     int n=sizeof(arr)/sizeof(int);
//     // bubbleSort(arr,n);
//     // selectionSort(arr,n);
//     // insertionSort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }




