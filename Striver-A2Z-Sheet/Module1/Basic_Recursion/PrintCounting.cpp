#include<bits/stdc++.h>

using namespace std;

void printCounter(int i , int n){

    if(i>n){
        return;
    }

    cout<<i<<endl;

    printCounter(i+1,n);
}

int main(){

    int n;
    cout<<"Enter the n: ";
    cin>>n;

    printCounter(1,n);


}