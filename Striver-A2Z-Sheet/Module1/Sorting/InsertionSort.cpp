#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n){

    for(int i =0 ;i<n;i++){
        int j= i;
        while(j>0 && arr[j]<arr[j-1]){
        int temp= arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;

        cout<<"Inside while\n";


        }
        
        cout<<"Runs\n";

    }

    cout<<"Sorted\n";


}

int main(){

    int n;
    cout<<"How many Elements in Array? ";
    cin>>n;

    int arr[n];
    for(int i =0 ; i<n;i++) cin>>arr[i];

    InsertionSort(arr,n);

    cout<<"Sorted array: ";
    for(auto it:arr) cout<< it <<" ";

}
