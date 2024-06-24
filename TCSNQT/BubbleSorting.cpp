#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void bubbleSort(int arr[], int n){
    //Sends the maximum number to the last using adjacent swapping.


    int end = n;
    for(int i=n-1; i>0; i--){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                //Swapping
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printArray(arr, n);
}


int main(){


    int arr[]={1,4,6,2,6,9,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, n);
    bubbleSort(arr, n);

}