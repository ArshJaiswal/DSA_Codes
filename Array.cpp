// #include<iostream>
// using namespace std;
// int main(){
//     int marks[6]={11,29,32,43,15,10};
//     for(int i=0;i<6;i++){
//         cout<<marks[i]<<endl;
//     }
//     int sizeb=sizeof(marks);                                     //No of Bytes
//     int size=sizeof(marks)/sizeof(int);                          //Size of Array
//     cout<<"No of Bytes = "<<sizeb<<endl;
//     cout<<"Size of Array = "<<size<<endl;
//     return 0;
// }



//Smallest & Largest In A Array

// #include<iostream>
// #include<climits>                                                   //FOR INT_MAX & INT_MIN 
// #include<algorithm> 
// using namespace std;
// int main(){
//     int marks[6]={11,29,52,3,51,-10};
//     // int t=marks[0];                                               //or t=INT_MAX (Largest Possible Value For Integer) similarly INT_MIN
//     int k,t=INT_MAX;

//     for(int i=1;i<6;i++){
//         if(t>marks[i]){
//             t=marks[i];
//             k=i;
//         }
//         // t=min(t,marks[i]);
//     }
//     cout<<k<<endl;
//     cout<<t;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void sum(int a,int b){
//         cout<<a+b;
//     }
// int main(){
//     int t=2,p=4;
//     sum(t,p);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void change_array(int arr[],int size){
//     for(int i=0;i<size;i++){
//         arr[i]=arr[i]*2;
//     }
// }
// int main(){
//     int size=5;
//     int arr[size]={1,2,3,4,5};
//     change_array(arr,size);
//     change_array(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


// Linear Search is the simplest searching technique in Data Structures and Algorithms
// where you check each element one by one until you find the target value.
// Linear Search
// #include<iostream>
// using namespace std;
// int linearSearch(int arr[],int size,int target){
//     for(int i=0;i<size;i++){
//         if (arr[i]==target){
//             return i;
//         }        
//     }
//     return -1;
// } 
// int main(){
//     int size=10;
//     int arr[size]={2,45,65,23,78,90,33,55,13,65};
//     int target=79;
//     cout<<linearSearch(arr,size,target)<<endl;
//     return 0;
// }


//Reverse Of An Array Using Another Array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={2,1,6,3,5};
//     int size=sizeof(arr)/sizeof(int);
//     int rarr[size];
//     for(int i=0;i<size;i++){
//         rarr[i]=arr[size-1-i];
//     }
//     for(int i=0;i<size;i++){
//         cout<<rarr[i]<<" ";
//     }
//     return 0;
// }


//Reverse Of An Array Without Using Another Array (In the same array)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={2,1,6,3,5,34,23,12,7,98};
//     int s=sizeof(arr)/sizeof(int);
//     int t;
//     for(int i=0;i<s/2;i++){
//         t=arr[i];
//         arr[i]=arr[s-1-i];
//         arr[s-1-i]=t;
//     }
//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//Reverse Of An Array Using Two Pointer Approach
// #include<iostream>
// #include<algorithm>
// using namespace std;
// void ReverseArray(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int size=7;
//     ReverseArray(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



//Sum and Product Of All Elements Of A Array  &  Swap The Min And Max Element Of A Array
// #include<iostream>
// #include<algorithm>
// #include<climits>
// using namespace std;
// int sum(int arr[],int size){
//     int s=0;
//     for(int i=0;i<size;i++){
//         s+=arr[i];
//     }
//     return s;
// }
// int product(int arr[],int size){
//     int p=1;
//     for(int i=0;i<size;i++){
//         p*=arr[i];
//     }
//     return p;
// }
// void swapmima(int arr[],int size){
//     int minV=INT_MAX,maxV=INT_MIN,imi=0,ima=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]<minV){
//             minV=arr[i];
//             imi=i;
//         }
//         if(arr[i]>maxV){
//             maxV=arr[i];
//             ima=i;
//         }
//     }
//     swap(arr[imi],arr[ima]);
// }
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int size=7;
//     cout<<sum(arr,size)<<endl;
//     cout<<product(arr,size)<<endl;
//     swapmima(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//Print Unique Elements In A Array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,4,1,4,5,5,6,2};
//     int size=10;

//     for(int i=0;i<size;i++){
//         int count=0;
//         for(int j=0;j<size;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count==1){
//             cout<<arr[i]<<endl;
//         }
//     }
//     return 0;
// }

//Same As Above But Using Function
// #include<iostream>
// using namespace std;
// void findunique(int arr[],int size){
//     for(int i=0;i<size;i++){
//         int count=0;
//         for(int j=0;j<size;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count==1){
//             cout<<arr[i]<<" ";
//         }
//     }
// }
// int main(){
//     int arr[10]={1,2,3,3,1,4,5,5,6,2};
//     int size=10;
//     findunique(arr,size);
//     return 0;
// }

//To Find The Intersection Of Two Array (Not A Good Code If Elements Are Repeated In Arr1)
// #include<iostream>
// using namespace std;
// void findIntersection(int arr1[],int size1,int arr2[],int size2){
//     for(int i=0;i<size1;i++){
//         for(int j=0;j<size2;j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<" ";
//                 break;
//             }
//         }
//     }
// }
// int main(){
//     int arr1[10]={1,2,3,4,4,5,6,7,8,10};
//     int size1=10;
//     int arr2[7]={11,12,3,55,6,77,4};
//     int size2=7;
//     findIntersection(arr1,size1,arr2,size2);
//     return 0;
// }

//Corrected One
// #include<iostream>
// using namespace std;
// bool checkAlreadyPrinted(int arr1[],int index){
//     for(int i=0;i<index;i++){
//         if(arr1[i]==arr1[index]){
//             return true;
//         }
//     }
//     return false;
// }
// void findIntersection(int arr1[],int size1,int arr2[],int size2){
//     for(int i=0;i<size1;i++){
//         if(checkAlreadyPrinted(arr1,i)){
//             continue;
//         }
//         for(int j=0;j<size2;j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<" ";
//                 break;
//             }
//         }
//     }
// }
// int main(){
//     int arr1[10]={1,2,3,4,4,5,6,7,8,10};
//     int size1=10;
//     int arr2[7]={11,12,3,55,6,77,4};
//     int size2=7;
//     findIntersection(arr1,size1,arr2,size2);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4]={2,3,3,2};
//     int n=sizeof(arr)/sizeof(int);
//     int val=3;
//     int k=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==val)
//         k++;
//     }
//     cout<<k<<endl;
//     int e=n-1;
//     int s=0;
//         while(s<e){
//             if(arr[s]==val){
//                 if(arr[e]==val){
//                     e--;
//                 }else{
//                     swap(arr[e],arr[s]);
//                     s++;
//                     e--;
//                 }
//             }else{
//                 s++;
//             }
//         }
//         for(int x:arr){
//             cout<<x<<" ";
//         }
//     return 0;
// }

//Rotating array question
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int k=2;
//     for(int i=0;i<k;i++){
//         int curr=arr[0];
//         for(int j=0;j<=6;j++){
//             int temp;
//             if(j==6){
//                 temp=arr[0];
//                 arr[0]=curr;
//                 curr=temp;
//             }else{
//                 temp=arr[j+1];
//                 arr[j+1]=curr;
//                 curr=temp;
//             }
//         }
//     }
//     for(int x:arr){
//         cout<<x<<" ";
//     }
//     return 0;
// }

