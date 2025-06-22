#include<iostream>
using namespace std;




bool primeno(int a){

    for(int i=2;i<a;i++){
        if(a%i==0){
          return false;
        }    


}

         return true;



}


int main(){


int n;
cout<<"Enter the valuee of n: ";
cin>>n;


for(int i=2;i<=n;i++){
bool isiprime=primeno(i);

if (isiprime)
cout<<i<<endl;

}





}