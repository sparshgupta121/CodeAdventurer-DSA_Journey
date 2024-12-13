#include<bits/stdc++.h>
using namespace std;

 void printname(string name){
        cout<<"hey" <<" "<<name; 
    }

int sum(int a , int b){
    int sum= a+b;
    return sum;
}

int main(){

    // //data-types
    // //int float double 

    // int num1;

    // float num2;

    // double num3;


    // cin>>num1;

    // cin>>num2;

    // cin>>num3;

    // cout<<"The integer num1 is:"<<num1<<"\n";
    // cout<<"The float num2 is:"<<num2<<endl;
    // cout<<"The Double num3 is:"<<num3<<"\n";

    // //string 
    // //cin getline

    // //if we have a string "Hey Sparsh" and we want to take it as a input in a single variable using cin then it will only take hey as an input it will break dowm at space

    // // for getting whole string with space as input we uses getline

    // string s1;

    // cin>>s1; // input Hey sparsh only Hey will get stored

    // cout<<"Input String 1 with cin is: "<<s1<<endl;

    // string s2;

    // getline(cin,s2);

    // cout<<"Complete string is"<<s2;

    // // char stores single character 256 charactes are there

    // char character;
    // cin>>character;

    // int age;
    // cin>>age;

    // if(age<18){
    //     cout<<"You're not an adult"<<endl;
    // }
    // else{
    //     cout<<"You're an Adult"<<endl;
    // }

    // //Marks system;

    // int marks;
    // cin>>marks;

    // if(marks<25){
    //     cout<<"F garde";
    // }

    // else if(marks<=44){
    //     cout<<"E grade";
    // }

    // else if(marks<=49){
    //     cout<<"D grade";
    // }

    // else if(marks<=59){
    //     cout<<"C grade";
    // }

    // else if( marks<=79){
    //     cout<<"B grade";
    // }

    // else if(marks<=100){
    //     cout<<"A grade";
    // }

    // else{
    //     cout<<"Something Up With inputs";
    // }

    // //nested if else is also there;

    // //switch statement 

    // int day;

    // cin>>day;

    // switch (day)
    // {
    //     case 1:
    //     cout<<"Monday";
    //     break;
    //     case 2:
    //     cout<<"Tuesday";
    //     break;
    //     case 3:
    //     cout<<"Wednesday";
    //     break;
    //     case 4:
    //     cout<<"Thursday";
    //     break;
    //     case 5:
    //     cout<<"Friday";
    //     break;
    //     case 6:
    //     cout<<"Saturday";
    //     break;
    //     case 7:
    //     cout<<"Sunday";
    //     break;
    // }
    
    // int arr[5];

    // for(int i=0 ; i<5;i++){
    //     cin>>arr[i];
    // }

    // int arr1[3][5]; // 2d array with 3 rows vertical and 5 columns horizontal 

    string name="Sparsh";
    
    // sting is also zero indexed
    cout<<name[0]<<"\n"; //will give s

    cout<<name.length()<<"\n";

    //Loops - for while Do-While

    for(int i=1;i<=5;i++){
        cout<<"A2Z_DSA_SERIES"<<endl;
    }

    int i=0;
    while(i<5){
        cout<<"I'm Sparsh"<<"\n";

        i++;
    }

    cout<<i<<"outside while loop"<<endl;

    do{
        cout<<"INSIDE DO LOOP";

        cout<<i<<endl;
        
        i++;

    }while(i<8);
    
    cout<<"oustide do while"<< i ;


    /* functions    

    peform certain things block of code less repetation of code
    void -----> doesn't return anything
    return ----->returns something according to its datatype, 
    parameterized, non parameterized */

   

    printname("SParsh");
    
    int addition = sum(5,6);
    cout<<addition;
    


}