#include<bits/stdc++.h>
using namespace std;

void extractDigit(int n){
    int num = n;
    while(num>0){
        int lastDigit= num%10;
        cout<<lastDigit<<endl;
        num=num/10;
    }
}

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    extractDigit(n);
}