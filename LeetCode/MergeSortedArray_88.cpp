//Merge Two Sorted Array Into A Third Array With Time Complexity - O(m+n) And Space Complexity O(m+n)
#include<iostream>
using namespace std;
int main(){
    int arr1[3]={1,2,3};
    int arr2[3]={2,5,6};
    int m=3,n=3;
    int i=0,j=0,k=0;
    int arr3[6];
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<m){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    for(int t=0;t<m+n;t++){
        cout<<arr3[t]<<" ";
    }
    return  0;
}

//Merge Two Sorted Array And Store It In Sorted Form Into The First Array Itself
//With Time Complexity - O(m+n) And Space Complexity O(1)

//Submitted In LEETCODE

//Just have to do the same thing as above but in reverse order and instead of using arr3 we have 
//to store the elements in arr1 only and instead of two more while we will only create while for j