#include<iostream>
using namespace std;    

int main(){
    int order = 0;


    cin>>order;
    int matrix[order][order];

    //Matrix imput
    for(int i=0; i<order; i++){
        for(int j=0; j<order; j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"Input Matrix: "<<endl;
    for(int i=0; i<order; i++){
        for(int j=0; j<order; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    //Resulatant Matrix
    for(int i=0; i<order; i++){
        for(int j=0; j<order; j++){
            if(j>i){
                matrix[i][j]=0;
            }
        }
    }


    //Printing Matrix
    cout<<"Resultant Matrix"<<endl;
    for(int i=0; i<order; i++){
        for(int j=0; j<order; j++){
            cout<<matrix[i][j];
            if(j<order-1){
                cout<<", ";
            }
        }
        if(i<order-1){
            cout<<endl;
        }
    }
    
}