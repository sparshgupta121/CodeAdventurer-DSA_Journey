#include<bits/stdc++.h>
using namespace std;

int noOfDigits(int n){
    int num=n;
    int count=0;

    while(num>0){
        count++;
        num/=10;
    }

    return count;
}

void OptimizedValue(int n){

    int digits=int(log10(n))+1;
    cout<<"Optimized Output:"<<digits<<endl;

}

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<noOfDigits(n)<<endl;
    OptimizedValue(n);
    
}

