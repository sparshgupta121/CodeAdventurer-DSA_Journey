#include<bits/stdc++.h>

using namespace std;

void PrintReverseCount( int n){
    if(n<1){
        return;
    }

    cout<<n<<endl;
    PrintReverseCount(n-1);
}

int main(){

    int n;
    cout<<"Enter the Value of n:";
    cin>>n;

    PrintReverseCount(n);
    
}