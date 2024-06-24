//Convert a decimal number ot binary


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long int convertToBinary(int n){
    long long int result=0;
    vector<int> temp;
    while(n!=1){
        temp.push_back(n%2);
        n=n/=2;
    }
    reverse(temp.begin(), temp.end());
    for(auto x:temp){
        result=result*10+x;
    }
    return result;
}


int main(){
    int num;
    while(1){
        cout<<"Enter number: ";
        cin>>num;
        cout<<"Binary of "<<num<<" is: "<<convertToBinary(num)<<endl;
    }
}