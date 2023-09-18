#include<iostream>
using namespace std;

int main()
{

int n;
cin>>n;
for (int i=0;i<n;i++){
    int col;
    for ( col=0;col<i+1;col++){
        int ans= col+1;
        char ch=ans+'A'-1;
        cout<<ch;

    }

    col=col-1;

    for(;col>=1;col--){
        int ans= col+1;
        char ch=col+'A'-1;
        cout<<ch;  }
    cout<<endl; 
    
}



}
