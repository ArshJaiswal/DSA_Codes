#include<iostream>
using namespace std;
void printb(int n){
    if(n<1)return;
    cout<<n<<" ";
    printb(n-1);
} 
void printf(int n){
    if(n<1)return;
    printf(n-1);
    cout<<n<<" ";
}
int factorial(int n){
    if(n<1){
        return 1;
    }
    return n*factorial(n-1);
}
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}
int main(){
    int n;
    cin>>n;
    // printf(n);
    // cout<<endl;
    // printb(n);
    // int r=factorial(n);
    int r=sum(n);
    cout<<r;
    return 0;
}