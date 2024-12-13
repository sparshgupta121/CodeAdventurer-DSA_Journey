#include<bits/stdc++.h>
using namespace std;

int checkperfect(int n){
    
    int temp=n/2;
    int sum=0;
    

    while(temp>0){
        if(n%temp==0){
            sum=sum+temp;
        }
        temp--;
    }

    if(sum==n){
        return 1;
    }
    return 0;



}

int main(){

    int n;
    cin>>n;

    cout<<checkperfect(n);

}