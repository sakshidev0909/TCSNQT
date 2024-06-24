//Merge and sort two sorted arrays


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    
    int arr1[]={1,2,3,4,5};
    int arr2[]={4,5};

    vector<int> result;
    for(int x:arr1){
        result.push_back(x);
    }

    for(int x:arr2){
        result.push_back(x);
    }
    sort(result.begin(), result.end());

    for(int x:result){
        cout<<x<<endl;
    }


}