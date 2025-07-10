#include<bits/stdc++.h>

using namespace std;

int partition(int arr[],int low,int high){

    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(arr[i]<=pivot && i<=high+1){
            i++;
        }
        while (arr[j]>pivot && j>=low+1)
        {
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void QuickSort(int arr[] ,int low, int high){

    if(low<high){
        int PartitionIndex = partition(arr,low,high);
        QuickSort(arr,low,PartitionIndex-1);
        QuickSort(arr,PartitionIndex+1,high);
    }
}



int main(){

    int n;
    cout<<"How many element? ";
    cin>>n;
    int arr[n];

    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }

    QuickSort(arr,0,n-1);

    for( auto it:arr) cout<<it<<" ";

}