// Question 1 -- N->1
// #include<iostream>
// #include<vector>
// using namespace std;
// void number(int n){
//     if(n==1){
//         cout<<n;
//         return;
//     }
//     cout<<n<<" ";
//     number(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     number(n);
//     return 0;
// }


// Question 2 -- 1->N
// #include<iostream>
// #include<vector>
// using namespace std;
// void number(int n){
//     if(n==0){
//         return;
//     }
//     number(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     number(n);
//     return 0;
// }


// Question 3 --- Sum Of Numbers
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+sum(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int r=sum(n);
//     cout<<r;
//     return 0;
// }

// Question 4 --- Product of n numbers
// #include<iostream>
// using namespace std;
// int product(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*product(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<product(n);
// }


// Question 5 --- Power of 2
// #include<iostream>
// using namespace std;
// int power(int n){
//     if(n==1){
//         return 2;
//     }
//     return 2*power(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<power(n);
//     return 0;
// }

