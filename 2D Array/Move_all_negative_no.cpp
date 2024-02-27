#include<iostream>
using namespace std;

int main(){

    int arr[]={-3,5,-8,4,8,0,9,7,3,-2};
    int n= sizeof(arr)/sizeof(arr[0]);cout<<n;

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }

        cout<<endl<<endl<<" ";


    int low=0;
    int high=n-1;
    while(low<=high){

        if(arr[low]<0){
            low++;
        }
        else{
            swap(arr[low],arr[high]);
            high--;
        }

    }

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }





}