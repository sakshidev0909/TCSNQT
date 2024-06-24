#include<iostream>
using namespace std;

class Parent{
    public:
        virtual void print(){
            cout<<"Parent"<<endl;
        }
        
};

class Child : public Parent{
    public:
        void print(){
            cout<<"Child"<<endl;
        }
        int print(){

        }
};



int main(){
    Child c;
    c.print();
}