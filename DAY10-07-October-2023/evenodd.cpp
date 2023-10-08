#include<iostream>
using namespace std;

int evenodd(int z){

    if(z%2==0){
    cout<<"The number is even";

}
    else {
        cout<<"The number is odd";
        return 0;
}

}

int main(){


int num;
cout<<"ENter the number: ";
cin>>num;

evenodd(num);

return 0;



}