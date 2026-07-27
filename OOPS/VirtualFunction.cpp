//Virtual Function Uses
#include<iostream>
using namespace std;
class Parent{
    public:
    // virtual void sound(){
    //     cout<<"Parent Class";
    // }
    void sound(){
        cout<<"Parent Class";
    }
};
class Child:public Parent{
    public:
    void sound(){
        cout<<"Child Class";
    }
};
int main(){
    Child ob;
    Parent *ptr;
    ptr=&ob;
    ptr->sound();
    return 0;
}