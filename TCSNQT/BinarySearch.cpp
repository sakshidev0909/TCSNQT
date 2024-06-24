#include<iostream>
using namespace std;

int binarySearch(int arr[], int target){

    int start = 0;
    int end = 4;

    while(start <= end){
        int mid = (start + end) / 2;


        if(target == arr[mid]){
            return mid;
        }else if(target > arr[mid]){
            start = mid + 1;
        }else if(target < arr[mid]){
            end = mid - 1;
        }
    }
    return -1;
}


int main(){
    int arr[]={1,2,3,4,5};
    int target = 5;

    int index = binarySearch(arr, target);
    cout<<"Target found at index: "<<index<<endl;
}