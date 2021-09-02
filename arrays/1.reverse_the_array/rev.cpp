#include <bits/stdc++.h>

void reverseArray(int arr[],int start, int end){
    
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--; 
    }
}

void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
     std::cout<<std::endl;
}

int main(){

    int arr[] = {4,5,7,10,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    std::cout<<"Array:"<<" ";
    printArray(arr,n);

    reverseArray(arr,0,n-1);
    std::cout<<"Reversed Array:"<<" "; 
    printArray(arr,n);
    

}