#include<bits/stdc++.h>

using namespace std;

void BubbleSort(int arr[], int n){

    for(int i=n-1;i>0;i--){

        int doSwap=0;

        for(int j= 0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                doSwap=1;
                cout<<"Swaps\n";
            }
        }

        if(doSwap==0){
            break;
        }

        cout<<"Runs\n";

    }



}

int main(){

    int n;
    cout<<"How many Elements in Array? ";
    cin>>n;

    int arr[n];
    for(int i =0 ; i<n;i++) cin>>arr[i];

    BubbleSort(arr,n);

    cout<<"Sorted array: ";
    for(auto it:arr) cout<< it <<" ";


}