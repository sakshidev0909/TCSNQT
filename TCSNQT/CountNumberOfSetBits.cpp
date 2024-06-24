//Count the number of sets bits in the given number
// 8 in binary is 1000 => 1 is set bit, 0 is reset bit

#include<iostream>
using namespace std;


int main(){
    
    int num, counter=1;
    cout<<"Enter number: ";

    cin>>num;
    if(num==0){
        cout<<"Number of sets bits: 0"<<endl;
        return 0;
    }
    while(num!=1){
        if(num%2==1){
            counter++;
        }
        num=num/2;
    }
    cout<<"Number of set bits: "<<counter<<endl;
}