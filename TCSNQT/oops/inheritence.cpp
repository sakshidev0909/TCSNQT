#include<iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(string name, int age){
            this->name = name;
            this->age = age;
        }
        void getInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            // cout<<"Rollno: "<<rollno<<endl;            
        }
};

class Student : public Person{
    public:
        int rollno; 

        Student(string name, int age, int rollno) : Person(name, age){
            this->rollno = rollno;
        }

        void getInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Rollno: "<<rollno<<endl;            
        }
};


class Teacher{
    public:
        string subject;
        double salary;
};


//Multiple Inheritence
class TA : public Student, public Teacher{
    public:

};

int main(){

    Student s("Apple", 1001,11);
    
    s.getInfo();
}