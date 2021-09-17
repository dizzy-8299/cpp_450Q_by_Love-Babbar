#include<bits/stdc++.h>

void rearrange(int arr[], int n){

    int j= 0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j){
                std::swap(arr[i],arr[j]);
            };

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

    int arr[] = {-3,5,2,1,0,-1,-4,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    rearrange(arr,n);
    printArray(arr,n);

    return 0;
} 