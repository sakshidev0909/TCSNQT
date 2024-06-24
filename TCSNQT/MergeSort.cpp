#include<iostream>
using namespace std;


void merge(int arr[], int l, int mid, int r){
    

    int n1=mid-l+1;
    int n2=r-mid;

    //temp arrays
    int a[n1];
    int b[n2];

    //Filling the temp arrays
    for(int i=0; i<n1; i++){
        a[i]=arr[l+i];
    }    
    for(int i=0; i<n2; i++){
        b[i]=arr[mid+1+i];
    }

    int p1=0;
    int p2=0;
    int k=l;
    //merging
    while(p1<n1 && p2<n2){
        if(a[p1]<b[p2]){
            arr[k]=a[p1];
            k++;
            p1++;
        }else if(b[p2]<a[p1]){
            arr[k]=b[p2];
            k++;
            p2++;
        }
    }



    //Copying all the remaing elements after one of the pointer has reached the last element
    while(p1<n1){
        arr[k]=a[p1];
        k++;
        p1++;
    }

    while(p2<n2){
        arr[k]=b[p2];
        k++;
        p2++;
    }

}


void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid= (l+r)/2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);

        merge(arr, l, mid, r);
    }
    
}

int main(){
    int arr[]={5,4,3,2,1};
    mergeSort(arr, 0, 4);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}