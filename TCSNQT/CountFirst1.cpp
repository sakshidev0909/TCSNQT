//Count the position of 1 from right to left


#include<iostream>
using namespace std;


int convertToBinary(int n){
    int result=1;
    while(n!=1){
        result=(result*10)+(n%2);
        n=n/=2;
    }
    return result;
}

int main(){
    long long int num, counter=1;
    cout<<"Enter number: ";
    cin>>num;

    while(num!=1){
        if(num%10==1){
            break;
        }
        counter++;
        num=num/10;
    }

    cout<<"Position of first 1 from right to left: "<<counter<<endl;
}