#include<vector>
#include<iostream>
#include<map>
using namespace std;

void countFrequency(vector<int> arr, int range){

    vector<int> result;

    map<int, int> map;
    for(int i=0; i<arr.size(); i++){
        map[arr[i]]++;
    }

    
    int i=0;
    while(i<=range){
        for(auto x:map){
            if(x.first==i){
                result.push_back(x.second);
            }else{
                result.push_back(0);
            }
            i++;
        }
    }
    
    for (int i = 0; i <=range; i++){
        cout<<i<<" "<<result[i]<<endl;
    }
    
}

int main(){
   
    
    vector<int> vect;

    vect.push_back(1);
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(2);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(3);
    vect.push_back(5);

    // cout<<"Printing vector:"<<endl;
    // for(int i=0; i<vect.size(); i++){
    //     cout<<vect[i]<<endl;
    // }
    countFrequency(vect, 5);
}