#include<bits/stdc++.h>

void getUnion(int arr1[],int arr2[],int m,int n){

    int i=0,j=0;
    while(i<m && j<n){

        if(arr1[i]<arr2[j]){
            std::cout<<arr1[i++]<<" ";
        }else if(arr2[j]<arr1[i]){
            std::cout<<arr2[j++]<<" ";
        }else{
            std::cout<<arr2[j++]<<" ";
            i++;
        }
    }


    while(i<m){
        std::cout<<arr1[i++]<<" ";
        }
    while(j<n){
        std::cout<<arr2[j++]<<" ";
        }

}

void getIntersection(int arr1[],int arr2[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr2[j]<arr1[i]){
            j++;
        }else{
            std::cout<<arr2[j]<<" ";
            i++;
            j++;
        }
    }

}

int main(){
    int arr1[] = {2,3,5,7,9};
    int arr2[] = {2,4,6,7,9};

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    std::cout<<"Union of two sorted array: "<<std::endl;
    getUnion(arr1,arr2,m,n);
    std::cout<<std::endl;
    std::cout<<"Intersection of two sorted arrays: "<<std::endl;
    getIntersection(arr1,arr2,m,n);
    return 0;
}