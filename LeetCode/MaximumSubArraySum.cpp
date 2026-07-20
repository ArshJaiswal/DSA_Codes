//Subarray


//To Print All The Subarray Possible For An Array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(int);
//     for(int s=0;s<n;s++){
//         for(int e=s;e<n;e++){
//             for(int i=s;i<=e;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//Maximum Subarray Sum (Triple Loop Solution)
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[7]={3,-4,5,4,9,7,-8};
//     int msas=INT_MIN;
//     int n=sizeof(arr)/sizeof(int);
//     for(int s=0;s<n;s++){
//         for(int e=s;e<n;e++){
//             int count=0;
//             for(int i=s;i<=e;i++){
//                 count+=arr[i];
//             }
//             if(count>msas){
//                 msas=count;
//             }
//         }
//     }
//     cout<<msas;
//     return 0;
// }


//Two Loop Solution
// #include<iostream>
// #include<climits>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[7]={3,-4,-5,-4,9,7,-1};
//     int n=sizeof(arr)/sizeof(int);
//     int ms=INT_MIN;
//     for(int s=0;s<n;s++){
//         int cs=0;
//         for(int e=s;e<n;e++){
//             cs+=arr[e];
//             ms=max(cs,ms);
//         }
//     }
//     cout<<ms;
//     return 0;
// }


//****Maximum Subarray Sum Using ***Kadane's Algorithm***
// #include<iostream>
// #include<climits>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[7]={3,-4,5,4,9,7,-8};
//     int n=sizeof(arr)/sizeof(int);
//     int cs=0,ms=INT_MIN;
//     for(int i=0;i<n;i++){
//         cs+=arr[i];
//         ms=max(cs,ms);
//         if(cs<0){
//             cs=0;
//         }
//     }
//     cout<<ms;
//     return 0;
// }

