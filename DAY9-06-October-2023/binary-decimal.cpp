#include<iostream>
#include<cmath>
using namespace std;

int dtob(int n){

    int no=0;
    int i=0;
    while(n>0){
        int bit=n%2;
      
        no=bit*pow(10,i++)+no;
        n=n/2;
    }
return no;

}


int dtob2(int n){

    int no=0;
    int i=0;
    while(n>0){
        int bit=(n&1);
        cout<<bit<<endl;
        no=bit*pow(10,i++)+no;
        n=n>>1;
    }
return no;

}

int main(){

    int n;
    cout<<"ENter the vaLUe for n:"<<endl;
    cin>>n;


    int binary = dtob(n);
    cout<<binary;
}