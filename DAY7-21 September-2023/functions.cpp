#include<iostream>
using namespace std;

void Name(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for (int i=0;i<n;i++){
        cout<<"Sparsh";
            cout<<endl;

    }

}

int getsum(int a, int b){
    int add=a+b;
    return add;
}

int main()
{

//     int n;
//     cout<<"Enter the value of n";
//     cin>>n;

//     for (int i=0;i<n;i++){
//         cout<<"Sparsh";
//             cout<<endl;

//     }

//      cout<<"Enter the value of n";
//     cin>>n;

//     for (int i=0;i<n;i++){
//         cout<<"Sparsh";
//             cout<<endl;

// }

//  cout<<"Enter the value of n";
//     cin>>n;

//     for (int i=0;i<n;i++){
//         cout<<"Sparsh";
//             cout<<endl;
//     }


Name();
cout<<endl;
Name();
cout<<endl;



int z=6;
cout<<"The Address of Z is : "<<&z<<endl<<endl;

int a;
cin>>a;
int b;
cin>>b;

int sum=getsum(a,b);
cout<<sum;
return 0;

}