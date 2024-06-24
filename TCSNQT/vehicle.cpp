#include<iostream>
using namespace std;

int main (){
    int v,w;
    cout<<"Enter the values of vehicle and wheel"<<endl;
    cin>>v>>w;
    int tw;
    int fw;
    if(2<=w && v<w && w%2==0){
        tw=(4*v-w)/2;
        fw=v-tw;
        cout<<"Two Wheeler:"<<tw<<endl;
        cout<<"Four Whheelers:"<<fw<<endl;

    }
    else{
        cout<<"Invalid Inputs";
        return 0;
    }


}