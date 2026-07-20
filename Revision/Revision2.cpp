// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(int);
//     int s=0,e=n-1;
//     while(s<e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// void unique(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count==1){
//             cout<<arr[i]<<" ";
//         }
//     }
// }
// int unique2(int arr[],int n){
//     int t=0;
//     for(int i=0;i<n;i++){
//         t=t^arr[i];
//     }
//     return t;
// }
// int main(){
//     int arr[11]={1,2,3,4,1,4,5,5,6,6,2};
//     int n=sizeof(arr)/sizeof(int);
//     int re=unique2(arr,n);
//     cout<<re;
//     return 0;
// }

// bool checkAlreadyPrinted(int arr1[],int i){
//     for(int j=0;j<i;j++){
//         if(arr1[j]==arr1[i]){
//             return true;
//         }
//     }
//     return false;
// }
// void intersection(int arr1[],int n1,int arr2[],int n2){
//     for(int i=0;i<n1;i++){
//         if(checkAlreadyPrinted(arr1,i)){
//             continue;
//         }
//         for(int j=0;j<n2;j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<endl;
//                 break;
//             }
//         }
//     }
// }
// int main(){
//     int arr1[10]={1,2,3,4,4,5,6,7,8,10};
//     int n1=10;
//     int arr2[7]={11,12,3,55,6,77,4};
//     int n2=7;
//     intersection(arr1,n1,arr2,n2);
//     return 0;
// }


// int main(){
//     vector<int> v = {1,2,3,4,5};
//     v.push_back(6);
//     cout<<v.capacity();
//     cout<<endl;
//     cout<<v.size();
//     return 0;
// }



// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void square(vector<int> v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]*v[i]<<" ";
//     }
// }
// int main(){
//     vector<int> v={7,3,8,4,9,5,2,1,6};
//     sort(v.begin(),v.end(),greater<int>());
//     // for(int x: v){
//     //     cout<<x<<" ";
//     // }
//     // cout<<endl<<v.front()<<" "<<v.back()<<endl;
//     // v.clear();
//     // v.push_back(100);
//     // v.insert(v.begin()+1,200);
//     // v.erase(v.begin()+1);
//     square(v);
//     cout<<endl;
//     for(int x:v){
//         cout<<x<<" ";
//     }
//     return 0;
// }
