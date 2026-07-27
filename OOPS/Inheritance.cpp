//Single Inheritance
// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//     void print(){
//         cout<<"Parent Class"<<endl;
//     }
// };
// class Child:public Parent{
//     public:
//     void print2(){
//         cout<<"Child Class"<<endl;
//     }
// };
// int main(){
//     Parent ob;
//     Child ob2;
//     ob.print();
//     ob2.print();
//     ob2.print2();
//     return 0;
// }

//Multi-Level Inheritance
// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//     void print(){
//         cout<<"Parent Class"<<endl;
//     }
// };
// class Child:public Parent{
//     public:
//     void print2(){
//         cout<<"Child Class"<<endl;
//     }
// };
// class GrandChild:public Child{
//     public:
//     void print3(){
//         cout<<"GrandChild Class"<<endl;
//     }
// };
// int main(){
//     Parent ob;
//     Child ob2;
//     GrandChild ob3;
//     ob.print();
//     ob2.print();
//     ob2.print2();
//     ob3.print();
//     ob3.print2();
//     ob3.print3();
//     return 0;
// }

//Multiple Inheritance
// #include<iostream>
// using namespace std;
// class Father{
//     public:
//     void print(){
//         cout<<"Father Class"<<endl;
//     }
// };
// class Mother{
//     public:
//     void print2(){
//         cout<<"Mother Class"<<endl;
//     }
// };
// class Child:public Father,public Mother{
//     public:
//     void print3(){
//         cout<<"Child Class"<<endl;
//     }
// };
// int main(){
//     Child ob;
//     ob.print();
//     ob.print2();
//     ob.print3();
//     return 0;
// }


//Hierarchial Inheritance
// #include<iostream>
// using namespace std;
// class Father{
//     public:
//     void print(){
//         cout<<"Father Class"<<endl;
//     }
// };
// class Child1:public Father{
//     public:
//     void print2(){
//         cout<<"Child1 Class"<<endl;
//     }
// };
// class Child2:public Father{
//     public:
//     void print3(){
//         cout<<"Child2 Class"<<endl;
//     }
// };
// int main(){
//     Child1 ob;
//     Child2 ob2;
//     ob.print();
//     ob.print2();
//     ob2.print();
//     ob2.print3();
//     return 0;
// }

//Hybrid is the combination of the above 4


// Use Of This Keyword
// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     string name="Arsh Jaiswal";
//     int reg_no=12310191;
//     void set(string name,int reg_no){
//         // this->name=name;
//         // this->reg_no=reg_no;
//         name=name;
//         reg_no=reg_no;
//     }
//     void get(){
//         cout<<name<<endl<<reg_no;
//     }
// };
// int main(){
//     Student ob;
//     ob.set("Arsh",12310111);
//     ob.get();
//     return 0;
// }

//OVERLOADING
//Function Overloading
// #include<iostream>
// using namespace std;
// void sum(int a,int b){
//     cout<<a+b<<endl;
// }
// void sum(int a,int b,int c){
//     cout<<a+b+c<<endl;
// }
// int main(){
//     sum(1,2,3);
//     sum(1,2);
//     return 0;
// }

//Method Overloading
// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//     void sum(int a,int b){
//         cout<<a+b<<endl;
//     }
//     void sum(int a,int b,int c){
//         cout<<a+b+c<<endl;
//     }
// };
// int main(){
//     Parent ob;
//     ob.sum(2,3,10);
//     ob.sum(1,2);
//     return 0;
// }


//OVERRIDDING
#include<iostream>
using namespace std;
class Parent{
    public:
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
};
class Child:public Parent{
    public:
    void sum(int a,int b){
        cout<<a+b+10<<endl;
    }
};
int main(){
    Child ob;
    ob.sum(2,3);
    ob.sum(1,2);
    return 0;
}