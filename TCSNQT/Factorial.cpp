//Find the factorial of a number


#include<iostream>
using namespace std;


int main(){
    int num, fact=1;
    cout<<"Enter number: ";
    cin>>num;


    while(num!=1){
        fact=fact*num;
        num--;

    }
    cout<<"Factorial: "<<fact<<endl;
}