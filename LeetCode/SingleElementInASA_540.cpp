//Single Element in a Sorted Array (LC)

//(Optimal Solution with O(logn))
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9] = {1,3,3,4,4,5,5,8,8};
//     int n=sizeof(arr)/sizeof(int);
//     int s=0,e=n-1;
//     if(n==1){
//         cout<<arr[0];
//         return 0;
//     }
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(mid==0 && arr[mid]!=arr[mid+1]){
//             cout<<arr[mid];
//             return 0;
//         }
//         if(mid==n-1 && arr[mid]!=arr[mid-1]){
//             cout<<arr[mid];
//             return 0;
//         }
//         if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
//             cout<<arr[mid];
//             return 0;
//         }
//         if(mid%2==0){
//             if(arr[mid]==arr[mid-1]){
//                 e=mid-1;
//             }else{
//                 s=mid+1;
//             }
//         }else{
//             if(arr[mid]==arr[mid-1]){
//                 s=mid+1;
//             }else{
//                 e=mid-1;
//             }
//         }
//     }
//     return -1;
// }


//Another Method (Optimal Solution with O(logn))
// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         int s = 0, e = nums.size() - 1;

//         while(s < e){
//             int mid = s + (e - s) / 2;

//             if(mid % 2 == 1) mid--;

//             if(nums[mid] == nums[mid + 1]){
//                 s = mid + 2;
//             } else {
//                 e = mid;
//             }
//         }
//         return nums[s];
//     }
// };

// int main(){
//     vector<int> nums = {1,1,2,3,3,4,4,8,8};
//     Solution obj;
//     cout << obj.singleNonDuplicate(nums);
// }