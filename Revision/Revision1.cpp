//First Revision
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={2,3,4,5,6};
//     int n=sizeof(arr)/sizeof(int);
//     int arrr[n];
//     for(int i=0;i<n;i++){
//         arrr[i]=arr[n-1-i];                        //O(n)
//     }
//     for(int i=0;i<n;i++){
//         cout<<arrr[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(int);
//     for(int i=0;i<n/2;i++){
//         swap(arr[i],arr[n-i-1]);                                            //O(n)
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
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
//     for(int x:arr){
//         cout<<x<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// #include<climits>
// using namespace std;
// int sum(int arr[],int n){
//     int s=0;
//     for(int i=0;i<n;i++){
//         s+=arr[i];
//     }
//     return s;
// }
// int product(int arr[],int n){
//     int p=1;
//     for(int i=0;i<n;i++){
//         p*=arr[i];
//     }
//     return p;
// }
// void swap(int arr[],int n){
//     int mi,ma;
//     int minV=INT_MAX;
//     int maxV=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]<minV){
//             minV=arr[i];
//             mi=i;
//         }
//         if(arr[i]>maxV){
//             maxV=arr[i];
//             ma=i;
//         }
//     }
//     swap(arr[mi],arr[ma]);
// }
// int main(){
//     int arr[5]={5,2,3,4,1};
//     int n=sizeof(arr)/sizeof(int);
//     int tsum=sum(arr,n);
//     int tproduct=product(arr,n);
//     cout<<tsum<<" "<<tproduct<<endl;
//     swap(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
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
// int main(){
//     int arr[10]={1,2,3,4,1,4,5,5,6,2};
//     int n=sizeof(arr)/sizeof(int);
//     unique(arr,n);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void checkIntersectionE(int arr1[],int arr2[],int n1,int n2){
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr2[j]<<" ";
//             }
//         }
//     }
// }
// int main(){
//     int arr1[6]={2,4,6,3,7,9};
//     int arr2[5]={2,6,9,5,0};
//     int n1=sizeof(arr1)/sizeof(int);
//     int n2=sizeof(arr2)/sizeof(int);
//     checkIntersectionE(arr1,arr2,n1,n2);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// bool checkIfAlreadyP(int arr1[],int index){
//     for(int i=0;i<index;i++){
//         if(arr1[index]==arr1[i]){
//             return true;
//         }
//     }
//     return false;
// }
// void checkIntersectionE(int arr1[],int arr2[],int n1,int n2){
//     for(int i=0;i<n1;i++){
//         if(checkIfAlreadyP(arr1,i)){
//             continue;
//         }
//         for(int j=0;j<n2;j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr2[j]<<" ";
//             }
//         }
//     }
// }
// int main(){
//     int arr1[6]={2,4,6,3,2,9};
//     int arr2[5]={2,6,9,5,0};
//     int n1=sizeof(arr1)/sizeof(int);
//     int n2=sizeof(arr2)/sizeof(int);
//     checkIntersectionE(arr1,arr2,n1,n2);
//     return 0;
// }


//VECTOR

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     // vector<int>v(5,0);
//     vector<int>v={1,2,3,5,6};
//     cout<<v.capacity()<<endl;
//     v.push_back(25);
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl<<v.capacity()<<endl;
//     v.pop_back();
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl<<v.front();
//     cout<<endl<<v.back();
//     // cout<<endl<<v.at(10);  
//     v.clear();
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v={2,1,6,5,4};
//     v.insert(v.begin()+2,3);
//     // v.erase(v.begin()+2);
//     sort(v.begin(),v.end(),greater<int>());
//     for(int x:v){
//         cout<<x<<" ";
//     }
//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// void square(vector<int>v){
//     for(int x:v){
//         x=x*x;
//         cout<<x<<" ";
//     }
// }
// int main(){
//     vector<int>v={1,2,3,4,5,6};
//     square(v);
//     cout<<endl;
//     for(int x:v){
//         cout<<x<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int binarySearch(vector<int>v,int target){
//     int s=0,e=v.size()-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(v[mid]==target){
//             return mid;
//         }else if(v[mid]>target){
//             e=mid-1;
//         }else{
//             s=mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int>v={1,4,8,14,16,18,27,30,56,78,90,200};
//     cout<<binarySearch(v,19);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int binarySearch(int arr[],int target,int n){
//     int s=0,e=n-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]==target){
//             return mid;
//         }else if(arr[mid]>target){
//             e=mid-1;
//         }else{
//             s=mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
// int arr[12]={1,4,8,14,16,18,27,30,56,78,90,200};
// int n=sizeof(arr)/sizeof(int);
// int target=16;
//     int r=binarySearch(arr,target,n);
//     cout<<r;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int binarySearch(int arr[],int n,int target,int s,int e){
//     int mid=s+(e-s)/2;
//     if(s>e){
//         return -1;
//     }
//     if(arr[mid]==target){
//         return mid;
//     }else if(arr[mid]>target){
//         return binarySearch(arr,n,target,s,mid-1);
//     }else{
//         return binarySearch(arr,n,target,mid+1,e);
//     }
// }
// int main(){
//     int arr[12]={1,4,8,14,16,18,27,30,56,78,90,200};
//     int n=sizeof(arr)/sizeof(int);
//     int target=90;
//     cout<<binarySearch(arr,n,target,0,n-1);
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int binarySearch(vector<int>v,int target){
//     int n=v.size();
//     int s=0,e=n-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(v[mid]==target){
//             return mid;
//         }
//         if(v[mid]>=v[s]){
//             if(v[mid]>target && target>=v[s]){
//                 e=mid-1;
//             }else{
//                 s=mid+1;
//             }
//         }else{
//             if(v[mid]<target && target<=v[e]){
//                 s=mid+1;
//             }else{
//                 e=mid-1;
//             }
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int>v={4,5,6,7,8,0,1,2};
//     cout<<binarySearch(v,5);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int arr[8]={1,4,7,9,8,5,3,0};
//     int n=sizeof(arr)/sizeof(int);
//     int s=0,e=n-1;
//     while(s<e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }else{
//             e=mid;
//         }
//     }
//     cout<<s;
//     return 0;
// }



//Subarray
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
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

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[7]={1,-2,3,-14,5,10,-7};
//     int n=sizeof(arr)/sizeof(int);
//     int maxS=INT_MIN;
//     for(int s=0;s<n;s++){
//         for(int e=s;e<n;e++){
//             int count=0;
//             for(int i=s;i<=e;i++){
//                 count+=arr[i];
//             }
//             if(maxS<count){
//                 maxS=count;
//             }
//         }
//     }
//     cout<<maxS;
//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[7]={1,-2,3,-14,5,10,-7};
//     int n=sizeof(arr)/sizeof(int);
//     int maxS=INT_MIN;
//     for(int s=0;s<n;s++){
//         int cs=0;
//         for(int e=s;e<n;e++){
//             cs+=arr[e];
//             maxS=max(cs,maxS);
//         }
//     }
//     cout<<maxS;
//     return 0;
// }

//Kadane's Algorithm
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[7]={1,-2,3,-14,5,10,-7};
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


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int majorityElement(vector<int>v){
//     int n=v.size()-1;
//     sort(v.begin(),v.end());
//     int ans=v[0],count=0;
//     for(int i=0;i<n;i++){
//         if(ans==v[i]){
//             count++;
//             if(count>n/2){
//             return ans; 
//             }
//         }else{
//             ans=v[i];
//             count=1;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int>v={2,2,1,1,1,2,2,3,3,2,3,2,2,4,4,4,4,5,6,7,8,2,2,2,2,2,2,2,2};
//     cout<<majorityElement(v);
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v={2,2,1,1,1,2,2,3,3,2,3,2,2,4,4,4,4,5,6,7,8,2,2,2,2,2,2,2,2};
//     int n=v.size()-1;
//     int ans=0,freq=0;
//     for(int i=0;i<n;i++){
//         if(freq==0){
//             ans=v[i];
//         }
//         if(v[i]==ans){
//             freq++;
//         }else{
//             freq--;
//         }
//     }
//     cout<<ans;
//     return 0;
// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// void bubbleSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         bool isSorted=false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 isSorted=true;
//             }
//         }
//         if(!isSorted){
//             break;
//         }
//     }
// }

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

// int main(){
//     int arr[5]={4,3,5,6,2};
//     int n=5;
//     // bubbleSort(arr,n);
//     // selectionSort(arr,n);
//     insertionSort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
