#include<bits/stdc++.h>
using namespace std;

void ForwardCount(int n){

    if(n<1){
        return;
    }

    ForwardCount(n-1);
    cout<<n<<endl;
}

void ReverseCount(int i ,int n){
    if(i>n){
        return;
    }

    ReverseCount(i+1,n);
    cout<<i<<endl;


}

int main(){

    int n;
    cout<<"ENter the Value of n: ";
    cin>>n;

    ForwardCount(n);
    ReverseCount(1, n);
}