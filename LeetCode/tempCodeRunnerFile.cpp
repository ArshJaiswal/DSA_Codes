#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    for(int s=0;s<n;s++){
        for(int e=s;e<n;e++){
            for(int i=s;i<=e;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}