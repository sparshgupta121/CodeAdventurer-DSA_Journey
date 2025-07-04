#include<bits/stdc++.h>

using namespace std;

void Sum(int sum ,int n){

    if(n==1){
        sum=sum+n;
        cout<<"Final Sum is: "<<sum;
        return;
    }

    sum = sum + n;
    // cout<<sum<<endl;
    Sum(sum, n-1);
}

int Summision(int n){
    if(n==0){
        return 0;
    }
    return n + Summision(n-1);
}

int Factorial(int n){
    if(n==1){
        return 1;
    }
    return n * Factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter value: ";
    cin>>n;
    int ans = Summision(n);
    cout<<"Ans of recusrive fn call: "<<ans<<endl;
    cout<<"Ans of Factorial: "<<Factorial(n)<<endl;
    Sum(0,n);
}