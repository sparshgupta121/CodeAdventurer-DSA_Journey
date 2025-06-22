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
cout<<"Enter the nUmber: ";
cin>>n;

bool ans = primeno(n);


if(ans){
    cout<<"Number is Prime";
}

else{
cout<<"Not prime";
}

}