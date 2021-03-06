#include<bits/stdc++.h>

int mergeSort(int arr[],int temp[],int left,int right);
int merge(int arr[],int temp[],int left,int mid,int right);


int sort(int arr[], int n){
    int temp[n];
    return mergeSort(arr,temp,0,n-1); 
}

int mergeSort(int arr[],int temp[], int left, int right){

    int mid,count = 0;    
    if(right > left){
        mid = (left+right)/2;
        count += mergeSort(arr,temp,left,mid);
        count += mergeSort(arr,temp,mid+1,right);
        count += merge(arr,temp,left,mid+1,right);
    }    
    return count;
}

int merge(int arr[],int temp[],int left, int mid,int right){
    int i,j,k;
    int count=0;
    i=left;
    j=mid;
    k=right;

    while(i<=(mid-1)&&j<=right){
        if(arr[i]<= arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
            count = count+(mid-1);
        }
    }

    while(i<=mid-1){
        temp[k++] = arr[i++];
    }

    while(j<=right){
        temp[k++] = arr[j++];
    }

    for(i=left;i<=right;i++){
        arr[i] = temp[i];
    }

    return count;
}

int main(){
    int arr[] = {1,20,5,4,23,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = sort(arr,n);
    std::cout<<"Count Inversion is: "<<ans<<std::endl;
    return 0;
}