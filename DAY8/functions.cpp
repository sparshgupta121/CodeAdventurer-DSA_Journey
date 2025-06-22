#include<iostream>
using namespace std;

int max(int x, int y, int z){

    if (x>y && x>z)
    return x;

    else if(y>z)
    return y;

    else
    return z;

    
    }

    int getsum(int x){

        int sum=0;

        for (int i=2;i<x+1;i=i+2){
            sum=sum+i;

            
        }
        return sum;

    }


int main(){

int a;
cin>>a;
cout<<endl;

int b;
cin>>b;

cout<<endl;

int c;
cin>>c;
cout<<endl;


int num=max(a,b,c);
cout<<"Biggest number is: "<<num;

int n;
cout<<"enter value of n: ";
cin>>n;

int ans= getsum(n);
cout<<"value of sum is : "<<ans<<endl;

int z;
cout<<"enter value of z: ";
cin>>z;

int ans1= getsum(z);
cout<<"value of sum is : "<<ans1;

return 0;
}


