//Inout: [2,3,1,9,3,1,3,9]
//Output: [2,3,1,9]

#include<iostream>
#include<vector>
#include<map>
using namespace std;


void removeDuplicates(vector<int> arr){
    vector<int> result;
    unordered_map<int, int> map;


    for(int i=0; i<arr.size(); i++){
        map[arr[i]]++;
    }
    
    for(auto x:map){
        result.push_back(x.first);
        // cout<<x.first<<' '<<x.second<<endl;
    }
    reverse(result.begin(), result.end());
    for(int x:result){
        cout<<x<<endl;
    }

}

int main(){

    vector<int> arr;
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(9);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(10);
    arr.push_back(89);
    arr.push_back(34);

    // for(int x:arr){
    //     cout<<x<<endl;
    // }

    removeDuplicates(arr);
}