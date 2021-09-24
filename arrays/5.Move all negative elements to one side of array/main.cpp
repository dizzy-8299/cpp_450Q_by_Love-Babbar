#include<bits/stdc++.h>


void moveNeg(int arr[],int n){

    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i] < 0){
            if(i != j){
                std::swap(arr[i],arr[j]);
            }

            j++;
        }
    }
}

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
}

int main(){
    
    int arr[] = {4,-4,5,-1,5,-2,6,55,7,-8,-1,-3};
    int n = sizeof(arr)/sizeof(arr[0]);

    moveNeg(arr,n);
    printArray(arr,n);
    
    return 0;
}