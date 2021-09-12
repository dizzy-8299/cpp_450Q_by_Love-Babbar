#include<bits/stdc++.h>
#include<iostream>

void reverseArray(int array[6],int start,int end){

    while(start<end){
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
    

}

void printArray(int array[6],int n){
    for(int i=0;i<n ;i++){
        std::cout<<array[i]<<" ";
    }
    std::cout<<std::endl;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int array[6];
    std::cout<<"Input 6 Elements : " <<std::endl;
    for(int i=0; i<6; i++){
        std::cin>>array[i];
    }

    int n = sizeof(array)/sizeof(array[0]);
    std::cout<<"Array :"<<std::endl;
    printArray(array,n);
    reverseArray(array,0,n-1);
    
    std::cout<<"Reversed Array :"<<std::endl;
    printArray(array,n);
    return 0;
}
