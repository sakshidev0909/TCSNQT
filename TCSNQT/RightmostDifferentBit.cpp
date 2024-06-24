/*
    Find the rightmost different bit int their binary form

    n1=11=(1011)
    n2=9= (1001)
    Therefore, different bit position = 2 (for n1 it is '1' and for n2 it is '0')

    n1=52=(110100)
    n2=4= (000100)
    Therefore, different bit position = 5 (for n1 it is '1' and for n2 it is '0')
*/

#include<iostream>
using namespace std;

int decimalToBinary(int num){
    
    int ans=0, i=0;
    while(num!=0){
        int bit=num&1;
        ans=bit*pow(10,i) + ans;
        num=num>>1;
        i++;
    }
    return ans;
}

int positionOfOneFromRight(int num){
    int count=1;

    if(num==0){
        return 0;
    }

    while(num!=1){
        if(num%2==1){
            return count;
        }
        count++;
        num=num/2;
    }

    return count;
    
}

int main(){
    
    int n1, n2, xorResult;
    cout<<"Enter number 1 and number 2: "<<endl;
    cin>>n1>>n2;

    // cout<<"The binary of "<<n1<<" is "<<decimalToBinary(n1)<<endl;
    // cout<<"The binary of "<<n2<<" is "<<decimalToBinary(n2)<<endl;

    xorResult=n1^n2; //XOR operation of n1 and n2
    cout<<"XOR of n1 and n2 is: "<<xorResult<<endl;

    cout<<"Position of different bit in binary form: "<<positionOfOneFromRight(xorResult)<<endl;

}