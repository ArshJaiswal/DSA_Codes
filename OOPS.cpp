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
// #include<iostream>
// using namespace std;
// class GrandParent{
//     public:
//     void get1(){
//         cout<<"GrandParent";
//     }
// };
// class Father : virtual public GrandParent{
//     public:
//     void get2(){
//         cout<<"Father";
//     }
// };
// class Mother : virtual public GrandParent{
//     public:
//     void get3(){
//         cout<<"Mother";
//     }
// };
// class Son : public Father, public Mother{
//     public:
//     void get4(){
//         cout<<"Son";
//     }
// };
// int main(){
//     Son ob;
//     ob.get1();
//     return 0; 
// }

// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//     virtual void get(){
//         cout<<"Parent";
//     }
// };
// class Son:public Parent{
//     void get(){
//         cout<<"Son";
//     }
// };
// int main(){
//     Parent* ptr;
//     Son ob;
//     ptr=&ob;
//     ptr->get();
//     return 0;
// }
//Work of Virtual Keyword?
//When this function is called through a base-class pointer or reference, 
//select the function according to the actual object type at runtime, rather 
//than simply using the pointer's type.

#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    Student(){
        name="Arsh Jaiswal";
        cout<<"Default Constructor Called"<<endl;
    }
    Student(string str){
        name=str;
        cout<<"Parameterized Constructor Called"<<endl;
    }
    Student(const Student &s){
        name=s.name;
        cout<<"Copy Constructor Called"<<endl;
    }
    ~Student(){
        cout<<"Destructor Called"<<endl;
    }
};
int main(){
    Student ob;
    Student ob2("Arsh");
    cout<<ob.name<<endl;
    cout<<ob2.name<<endl;
    Student ob3(ob2);
    cout<<ob3.name<<endl;
    return 0;
}