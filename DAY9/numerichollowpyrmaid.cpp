#include<iostream>
using namespace std;

int main(){


int n;
cout<<"Enter the value for n";
cin>>n;

int num=2;
for (int row=0;row<n;row++){
    
        int i=2;

    for (int col=0;col<2*row+1;col++){
         int start=1;
        if (col==0 ){
        cout<<"1";
        }

        
        else if (col==2*row){
            cout<<num;
            num++;
        }

        
        else if(row==n-1 && col%2==0 ){
            cout<<i;
            i++;
            }
        
        else
        cout<<" ";
}    cout<<endl; 

    }
}


