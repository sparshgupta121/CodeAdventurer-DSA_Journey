#include<iostream>
using namespace std;

int main(){
int Marks;
cout<<"Enter The Marks Scored"<<endl;
cin>>Marks;

if (Marks>90 && Marks<=100){
    cout<<"You Scored A Grade";

}

else if(85<Marks && Marks<=90){
    cout<<"You Scored B+ Grade";
}

else if(80<Marks && Marks<=85){
    cout<<"You Scored B Grade";
}

else if(70<Marks && Marks<=80){
    cout<<"You Scored C Grade";
}

else if(60<Marks&& Marks<=70){
    cout<<"You Scored D Grade";
}

else if(50<Marks && Marks<=60){
    cout<<"You Scored E Grade";
}

else if(0<=Marks && Marks<=50){
    cout<<"Fail-Better Luck Next Time";
}

else {

cout<<"Enter Valid Input";
}



}