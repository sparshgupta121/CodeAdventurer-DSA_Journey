#include<iostream>
using namespace std;

int main(){

int n;
cout<<"enter value for n: "<<endl;
cin>>n;

if(n>9){
cout<<"plese enter value >=9";
return 0;
}

for (int row=0;row<n;row++){
    
  int indexcont=8-row;
         int num=row+1;
        int numcount=num;

    for (int col=0;col<17;col++){



        if(col<9-row-1){
            cout<<"*";
        }


        else if(col==indexcont &&numcount>0){
            cout<<num;
            indexcont=indexcont+2;
            numcount--;


        }

        else
        cout<<"*";

        }
cout<<endl;

    }





}