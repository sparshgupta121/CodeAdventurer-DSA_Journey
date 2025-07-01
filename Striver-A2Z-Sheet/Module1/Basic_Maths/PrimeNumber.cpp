#include<bits/stdc++.h>

using namespace std;

bool isPrime(int num){

    int cnt=0;

    for(int i=1; i*i<num; i++){
        if(num%i==0){
            cnt=cnt+1;
        if(num/i!=i){
              cnt=cnt+1;
           }
        }
    }

    if(cnt == 2){
        return true;
    }

    return false;

}

int main(){

    int x;
    cout<<"Enter the Number: ";
    cin>>x;

    if(isPrime(x)){
        cout<<"Prime";
    } else cout<<"Not Prime";

}



