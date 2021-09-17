#include <bits/stdc++.h>

void segregate(int arr[],int n){
    int low=0,mid=0,high=n-1;

    while(mid <= high){
        switch (arr[mid])
        {
        case 0:
            std::swap(arr[low++],arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            std::swap(arr[mid],arr[high--]);
            break;
        }
    }
};

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
};

int main(){

    int arr[] = {0,1,2,1,0,2,1,0,0,1,2,1,0,1,2,1,0,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    segregate(arr,n);

    std::cout<<"Array after Segregation: ";
    printArray(arr,n);

    return 0;
}