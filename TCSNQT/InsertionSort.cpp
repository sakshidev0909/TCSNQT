#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void insertionSort(int arr[], int n){
    //Places the element to its correct position using adjacent swapping.

    for(int i=1; i<n; i++){
        int current = arr[i];
        int j=i-1;

        while(arr[j]>current && j>=0){
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j--;
        }
        arr[j+1]=current;
    }


    
    printArray(arr, n);
}


int main(){


    int arr[]={1,4,6,2,6,9,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, n);
    insertionSort(arr, n);

}