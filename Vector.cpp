// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     // vector<int> v={1,2,3,4,5};
//     // vector<int> v(5,0);
//     // for(int i=0;i<v.size();i++){
//     //     cout<<v.at(i)<<" ";
//     // }
//     vector<char> v={'a','b','c','d','e','f'};
//     v.push_back('g');                                             //Adds an element at the end
//     v.pop_back();                                                 //Removes the last element
                                                      
//     // for(char i:v){
//     //     cout<<i<<" ";
//     // }
//     // cout<<endl;

//     cout<<v.size()<<endl;                                         //v.at(i) is used to access the elements, it also provides the bound check safety 
//     cout<<v.front()<<endl;                                        //Return the first element
//     cout<<v.back()<<endl;                                         //Return the last element
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);                                                  
//     v.push_back(4);                                                 
//     v.push_back(5);                         
//     cout<<v.size()<<endl;
//     cout<<v.capacity();                                               
// }

// size() → how many elements are currently stored
// capacity() → how much space is allocated
//v.clear() is used to remove all elements from a vector. But vector still exist.

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector <int> v={3,4,5,2,1,7,6};
//     // v.insert(v.begin()+1,5);
//     // v.erase(v.begin()+7);
//     // sort(v.begin(),v.end());                        //For Ascending order
//     sort(v.begin(),v.end(),greater<int>());            //For Descending order by using comparator greater<int>()
//     for(int i:v){
//         cout<<i<<" ";
//     }
//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// void square (vector<int> &v,int size){
//     for(int i=0;i<size;i++){
//         v[i]=v[i]*v[i];
//     }
// }
// int main(){
//     vector<int> v={1,2,3,4,5};
//     square(v,5);
//     for(int i:v){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// BINARY SEARCH
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
//     cout<<BinarySearch(v,27);
//     return 0;
// }

//int mid=low  +  (high-low)/2;                  Optimization:This avoids overflow in large arrays (overflow-safe mid). (important in interviews)
//Binary Search(Recursion) Time and Space Complexity : O(logn) & O(logn)
//Binary Search(Iterative) Time and Space Complexity : O(logn) & O(1)






