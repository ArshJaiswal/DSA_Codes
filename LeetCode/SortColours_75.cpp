#include<iostream>
#include<algorithm>
using namespace std;
void sortSecond(int arr[],int n){                     //O(n) Time Complexity & O(1) Space Complexity but in double pass 
    int count0=0,count1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        if(arr[i]==1){
            count1++;
        }
    }
    for(int i=0;i<n;i++){
        if(i<count0){
            arr[i]=0;
        }else if(i<count0+count1){
            arr[i]=1;
        }else{
            arr[i]=2;
        }
    }
}

//Dutch National Flag Algorithm                       //O(n) TC and O(1) SC  in Single Pass (Means in single array traversal)
void sortThird(int arr[],int n){     
    int m=0,h=n-1,l=0;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[l],arr[m]);
            m++;
            l++;
        }else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }

}
int main(){
    int arr[10]={2,0,2,1,1,0,1,2,0,0};
    int n=sizeof(arr)/sizeof(int);
    // sort(arr,arr+n);                               //First Solution
    // sortSecond(arr,n);
    sortThird(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
