#include<iostream>
using namespace std;

int main()
{

    int a=5;
    cout<<"The Interger is "<<a<<"\n"<<endl;
    cout<<"The Size of a is"<<sizeof(a)<<endl;

    char ch=97;
    cout<<"The Character is" <<ch<<endl<<endl;

    bool flag=true;
    cout<<"the value of Bool is "<<flag<<"\n\n";

        // bool takes 1 byte(8bits) howwever 1 bit is sufficent to represent but the smallest memory block that is addressable is of 1byte (8bit)

    float f=1.25;
        cout<<"the value of float is "<<f<<"\n\n";

    double z=52.30;
            cout<<"the value of double is "<<z<<"\n\n";

    int x=int(z) +2;
    cout<<"The Int Value is"<<x<<endl<<endl;


    char ch1=char(1024);
    cout<<"The Character is" <<ch1<<endl<<endl;

    int r=7;
    int s=2;

    cout<<r+s<<endl;
    cout<<r-s<<endl;
    cout<<r*s<<endl;
    cout<<r/s<<endl;


}

