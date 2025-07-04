#include<bits/stdc++.h>
using namespace std;

void reveerseArray(int arr[],int size, int i){
    if(i>=size/2){
        return;
    }

    swap(arr[i],arr[size-i-1]);
    reveerseArray(arr,size,i+1);
}

int main(){

    int n;
    cout<<"ENter n:";
    cin>>n;

    int arr[n];
    for(auto& it:arr){
        cin>>it;
    }

    reveerseArray(arr,n,0);

    cout<<endl<<"Reversed Array is :"<<endl;
    for (auto i1:arr){
        cout<<i1<<endl;
    }
}