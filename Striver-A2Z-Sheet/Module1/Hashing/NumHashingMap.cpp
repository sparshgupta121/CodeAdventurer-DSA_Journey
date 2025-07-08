#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    map<int,int>mpp;

    for(auto i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;

    }

    int q;
    cout<<"How many Values to Search? ";
    cin>>q;

    while(q--){
        int n;
        cin>>n;

        cout<<mpp[n]<<endl;
    }
    
}