// Lambda Function
// ---A lambda function in C++ is an anonymous function (a function without a name) that can be defined directly inside another function or expression.
// ---It allows you to create and use a function without declaring a separate normal function outside main().

// #include<iostream>
// using namespace std;
// int main(){
//     auto display=[](int a,int b){
//         return a+b;
//     };
//     cout<<display(10,20);
//     return 0;
// }   


// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//     string name="Father";
//     int age=45;

//     void display1(){
//         cout<<"Parent Class";
//     }
// };
// class Child{
//     public:
//     string name="Child";
//     int age=20;
//     void display2(){
//         cout<<"Child Class";
//     }
// };
// int main(){
//     Parent ob1,ob2;
//     ob1.name="Arsh Jaiswal";
//     ob1.age=50;
//     cout<<ob1.name<<" "<<ob1.age<<" "<<ob2.name<<" "<<ob2.age<<endl;
//     ob1.display1();
//     return 0;    
// }



// #include<iostream>
// using namespace std;
// class Student{
//     private:
//     int balance=10000;
//     public:
//     void set(int t){
//         if(t>500){
//             balance+=t;
//         }
//     }
//     int get(){
//         return balance;
//     }
// };
// int main(){
//     Student ob;
//     ob.set(1000);
//     cout<<ob.get();
//     return 0;
// }


//Diamond Problem
#include<iostream>
using namespace std;
class GrandParent{
    public:
    void get1(){
        cout<<"GrandParent";
    }
};
class Father : virtual public GrandParent{
    public:
    void get2(){
        cout<<"Father";
    }
};
class Mother : virtual public GrandParent{
    public:
    void get3(){
        cout<<"Mother";
    }
};
class Son : public Father, public Mother{
    public:
    void get4(){
        cout<<"Son";
    }
};
int main(){
    Son ob;
    ob.get1();
    return 0; 
}