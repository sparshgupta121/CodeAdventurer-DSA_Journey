#include<bits/stdc++.h>

using namespace std;



int main(){

    int max;
    cout<<"Enter Max Number of Array: ";
    cin>>max;
    int n;
    cout<<"Enter the No. of Element: ";
    cin>>n;

    int arr[n];

   for(auto& it:arr){
        cin>>it;
   }

   int hash[max+1]={0};
   for(int i =0;i<n;i++){
    hash[arr[i]]++;
   }

   int q;
   cout<<"No. of elements to search: ";
   cin>>q;

   for(int i=0;i<q;i++){
    int n;
    cin>>n;

    cout<<"No of times"<<n<<"appeared is: "<<hash[n]<<endl;

   }
}