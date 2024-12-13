#include<bits/stdc++.h>

using namespace std;

bool armstrong(int n){
    int sum=0;
    int orgnum=n;
    while(n>0){
        int digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }

    if(sum==orgnum){
        return true;
    }
    else return false;

}

int main(){

    int n;
    cout<<"entre 3 digit no";
    cin>>n;

    bool ans =armstrong(n);
    if(ans){
        cout<<"Trueeeeee";
    }
    else cout<<"Falseeee";
}