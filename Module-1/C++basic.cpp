#include<iostream>
using namespace std;

int main(){

// Data Types

// integer , character , boolean , long , long long , float , double , long double

int x = 10;
long y =1010;
long long z =101010101010;

float f = 4.05050;
double d = 8415.20;

//string, getline 

string name;
cout<<"Enter String:";

getline(cin,name);
cout<<name<<endl;

char ch;
cout<<"Enter Character:";

cin>>ch;

cout<<ch<<endl;

//if-else

int age;
cout<<"Enter Age:"<<endl;

cin>>age;

if(age>=18){
    cout<<"You are Adult";
}

else{
    cout<<"You are Not Adult";
}


int marks;
cout<<"Enter Marks:";
cin>>marks;

if(marks<0){
    cout<<"Enter Valid input";
}

else if(marks<25){
    cout<<"F";
}

else if(marks<=44){
    cout<<"D";
}

else if(marks<=60){
    cout<<"C";
}

else if(marks<=80){
    cout<<"B";
}

else{
    cout<<"A";
}

int day;
cout<<"Enter Day";
cin>>day;

switch (day)
{
case 1:
    cout<<"Monday";
    break;
case 2:
    cout<<"Tuesday";
    break;
case 3:
    cout<<"Wednesday";
    break;
case 4:
    cout<<"Thursday";
    break;
case 5:
    cout<<"Friday";

    break;
case 6:
    cout<<"saturday";
    break;
case 7:
    cout<<"Sunday";
    break;


default:
    break;
}

  int arr[4];
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    string s= "Sparsh";
    cout<<s[0];
    
    cout<<s[1];

    cout<<s.length();

}