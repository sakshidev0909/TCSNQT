#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int mini = i;
        for(int j = i; j < n; j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }

        //Swapping with the first for reamining array
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
    printArray(arr, n);
}


int main(){


    int arr[]={1,4,6,2,6,9,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, n);
    selectionSort(arr, n);

}


void binarySearch2(int arr[], int n){

    for(int i = 0; i; i<n-1; i++){
        int mini = i;

        for(int j=i; j<n; j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }

        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;

    }

}