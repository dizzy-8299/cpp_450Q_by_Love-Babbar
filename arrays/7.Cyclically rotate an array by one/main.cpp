#include<bits/stdc++.h>

void rotate(int arr[],int n){
    int x = arr[n-1],i;
    for(i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = x;
}


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {4,8,7,2,5,9,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    std::cout<<"Array is: ";
    printArray(arr,n);
    std::cout<<std::endl;
    rotate(arr,n);
    std::cout<<"Rotated array is: ";
    printArray(arr,n);
    return 0;
}