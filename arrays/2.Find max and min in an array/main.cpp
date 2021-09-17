//Find Min Max in an array using minimum number of comparisions

#include<bits/stdc++.h>

struct pair {
    int min;
    int max;
};

struct pair getMinMax(int arr[], int n){

    struct pair minmax;

    if(n==1){
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }

    if(arr[0] > arr[1]){
        minmax.min = arr[1];
        minmax.max = arr[0];
    }else{
        minmax.min = arr[0];
        minmax.max = arr[1];
    }

    for(int i=2;i<n;i++){
        
        if(arr[i]>minmax.max){
            minmax.max = arr[i];
        }else if(arr[i]<minmax.min){
            minmax.min = arr[i];
        }
    }

    return minmax;
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr[6];

    std::cout<<"Enter 6 Elements for Array:"<<std::endl;
    for(int i=0; i<6; i++){
        std::cin>>arr[i];
    }

    std::cout<<"Array: "<<std::endl;
    for(int i=0;i<6;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<" "<<std::endl;
    
    int n = sizeof(arr)/sizeof(arr[0]);
    struct pair minmax = getMinMax(arr,n);
    
    std::cout<< "Min element is "<< minmax.min<<std::endl;
    std::cout<< "Max element is "<< minmax.max<<std::endl;
    return 0;
}