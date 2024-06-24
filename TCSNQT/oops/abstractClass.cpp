#include<iostream>
using namespace std;

class Parent{ //Abstract class

    /*

        Any class having a pure virtual function is a abstract class
        We cannot create objects from virtual classes directly
    */
    public:
        virtual void print() = 0; //Pure virtual function
};

class Child : public Parent{
    public:
        void print(){
            cout<<"Child"<<endl;
        }
};

int main(){
    Child c;
    c.print();
}