#include<iostream>
using namespace std;

int main(){


int n;
cin>>n;
int c=1;
    for (int row=0;row<n;row++){
        for(int col=0;col<row;col++){
        cout<<c;
        c++;
        }
  cout<<endl;
    }
  

  int num=c-4;
    for (int row=0;row<n;row++){
        int k=num;
        for(int col=0;col<n-row-1;col++){
        
        cout<<k;
        k++;

        }
                num=num-(n-row-2);

  cout<<endl;
    }
  
}