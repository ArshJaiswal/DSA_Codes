//Binary Search
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,6,9,10};
//     int target=9;
//     int n=sizeof(arr)/sizeof(int);
//     int low=0,high=n-1;
//     while(low<=high){
//         int mid=(high+low)/2;
//         if(arr[mid]==target){
//             cout<<mid;
//             return 0;
//         }else if(arr[mid]<target){
//             low=mid+1;
//         }else{
//             high=mid-1;
//         }
//     }
//     cout<<-1;
//     return 0;
// }


// A dry run means:
// 👉 manually executing your code step-by-step without actually running it on a computer.


//Binary Search Using Recursion
// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[],int target,int st,int en){
//     int mid=st+(en-st)/2;
//     if(st>en){
//         return -1;
//     }
//     if(arr[mid]==target){
//         return mid;
//     }else if(arr[mid]<target){
//         return BinarySearch(arr,target,mid+1,en);
//     }else{
//         return BinarySearch(arr,target,st,mid-1);
//     }
// }
// int main(){
//     int arr[10]={1,5,9,11,16,29,39,47,56,64};
//     cout<<BinarySearch(arr,47,0,9);
//     return 0;
// }
//Binary Search(Recursion) Time and Space Complexity : O(logn) & O(logn)
//Binary Search(Iterative) Time and Space Complexity : O(logn) & O(1)


// #include<iostream>
// #include<vector>
// using namespace std;
// int BinarySearch(vector<int>&v,int target){
//     int low=0,high=v.size()-1;
//     while(low<=high){
//         // int mid=(low+high)/2;
//         int mid=low+(high-low)/2;                             //Overflow Safe
//         if(v[mid]==target){
//             return mid;
//         }else if(v[mid]<target){
//             low=mid+1;
//         }else{
//             high=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int>v={1,6,16,27,38,49,50,66,67,79};
//     cout<<BinarySearch(v,5);
//     return 0;
// }

//int mid=low  +  (high-low)/2;                  Optimization:This avoids overflow in large arrays (overflow-safe mid). (important in interviews)
//Binary Search(Recursion) Time and Space Complexity : O(logn) & O(logn)
//Binary Search(Iterative) Time and Space Complexity : O(logn) & O(1)


// *******LeetCode-33 (Search in Rotated Sorted Array)
//In a Rotated Sorted Array one of the half is always sorted either the left half or the right half

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[8]={4,5,6,7,8,0,1,2};
//     int n=8,target=8;
//     int s=0,e=n-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]==target){
//             cout<<mid;
//             return 0;
//         }
//         if(arr[s]<=arr[mid]){                  //Left Sorted
//             if(arr[s]<=target && target<arr[mid]){
//                 e=mid-1;
//             }else{
//                 s=mid+1;
//             }
//         }
//         else{                                 //Rigth Sorted
//             if(arr[mid]<target && target<=arr[e]){
//                 s=mid+1;
//             }else{
//                 e=mid-1;
//             }
//         }
//     }
//     cout<<-1;
//     return 0;
// }

//Peak element (maximum element) in a mountain array using Binary Search
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4] = {0,10,5,2};
//     int n=sizeof(arr)/sizeof(int);
//     int s=0;
//     int e=n-1;
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


// ⚠️ Small but important note
// Your code assumes:
// arr[mid+1] is valid

// This is safe because:
// mid < e
// and e = n-1
// So mid+1 never goes out of bounds


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={0,3,8,9,5,2};
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


//Find a target in a rotated sorted array
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> nums={5,6,7,0,1,2,3,4};
//     int target=10;
//     int l=0,h=nums.size()-1;
//     while(l<=h){
//         int mid=l+(h-l)/2;
//         if(nums[mid]==target){
//             cout<<mid;
//             return 0;
//         }
//         if(nums[l]<=nums[mid]){
//             if(nums[l]<=target && nums[mid]>target){
//                 h=mid-1;
//             }
//             else{
//                 l=mid+1;
//             }
//         }else{
//             if(nums[mid]<target && nums[h]>=target){
//                 l=mid+1;
//             }else{
//                 h=mid-1;
//             }
//         }
//     }
//     cout<<-1;
//     return 0;
// }
