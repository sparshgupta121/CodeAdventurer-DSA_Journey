#include<iostream>
using namespace std;

int main(){

int q;
cout<<"Enter the Number of Rows: ";
cin>>q;

for(int i=0;i<q;i++)
{
    for(int w=0;w<i+1;w++){
        cout<<w+2;
    }    
    cout<<endl;
}

}