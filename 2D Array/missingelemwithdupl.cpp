#include<iostream>
#include <algorithm> // Include the algorithm header for the sort function

using namespace std;


int printarr(int arr[],int size){
for (int i=0;i<size;i++){
    cout<<arr[i]<<" ";

}

}


int main(){


    int arr[]={1,2,2,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    // for(int i=0;i<n;i++){
        
    //     int index=abs(arr[i]);
        
    //     if(arr[index-1]>0){
    //         arr[index-1]*=-1;
    //         }

    // }

    //     for(int i=0;i<n;i++){
    //         if(arr[i]>0){
    //             cout<<i+1<<" ";
    //         }


    //     }


    sort(arr,arr+n);

    // printarr(arr,n);
    for(int i=0;i<n;i++){

    int index=arr[i];
    if(arr[index]!=index){
        swap(arr[index],index);
    }
    
    }
    printarr(arr,n);

    for(int i=0;i<n;i++){
        if (arr[i]!=i+1){
            return 
        }
    }

}