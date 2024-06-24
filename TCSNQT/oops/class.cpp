#include<iostream>
#include<string>
using namespace std;

class Teacher{

    private:
        string name;
        int age;



    public:

        //Non-parameterized constructor
        Teacher(){
            this->name = "Teacher";
            this->age =11;
        }

        //Parameterized constructor
        Teacher(string name, int age){
            this->name = name;
            this->age = age;
        }

        //Copy constructor
        Teacher(Teacher &obj){
            this->name = obj.name;
            this->age = obj.age;
        }

        //destructor
        ~Teacher(){
            cout<<"Destructor called!"<<endl;
        }

        void getInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};

int main(){ 
    Teacher t1("Apple", 1001);
    t1.getInfo();

    Teacher t2(t1);
    t2.getInfo();
}