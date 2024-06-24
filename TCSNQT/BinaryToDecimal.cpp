//Convert any binary number to decimal


#include<bits/stdc++.h>
using namespace std;


int binaryToDecimal(int n){
    int ans=0, i=0;

    while(n!=0){

        ans=ans + (n%10)*pow(2, i);
        i++;
        n=n/10;
    }
    return ans;
}

int main(){
    int num, decimalOfN;
    cout<<"Enter any number in binary: ";
    cin>>num;


    decimalOfN = binaryToDecimal(num);
    cout<<"Decimal of "<<num<<" is: "<<decimalOfN<<endl;



}
