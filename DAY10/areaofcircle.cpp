#include<iostream>
using namespace std;



double area(int z){

double area=3.14*z*z;
return area;

}


int main(){


double x;
cout<<"Enter Radius: ";
cin>>x;

double ans=area(x);
cout<<"The Area of Circle : "<<ans;

return 0;

}