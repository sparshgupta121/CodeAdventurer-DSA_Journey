#include<iostream>
using namespace std;

int main(){
int row;
for (row=0;row<3;row++){
    int col;
    for (col=0;col<5;col++){
    cout<<"*";
    }

    cout<<endl;
}
    cout<<endl;
    cout<<endl;

// square rectangle
int n;
cout<<"Enter the No for square pattern: ";
cin>>n;

for(int row=0;row<n;row++){
    for(int col=0;col<n;col++){
        cout<<"*";
    }
    cout<<endl;

}

    cout<<endl;

    cout<<endl;



// hollow rectangle

cout<<"Enter the Length:";
int length;
cin>>length;
cout<<endl;
cout<<"Enter the Breadth:" ;
int breadth;
cin>>breadth;

for(int i=0;i<breadth;i++)
{
    if(i==0 || i==breadth-1){
        for(int j=0;j<length;j++){

            cout<<"*";
    }
    }    
    else{
        cout<<"*";

        for (int m=0;m<length-2;m++){
                cout<<" ";

        }

        cout<<"*";

    }
            cout<<endl;


    }

            cout<<endl;
        cout<<endl;


// half pyramid

int q;
cout<<"Enter the Number of Rows: ";
cin>>q;

for(int i=0;i<q;i++)
{
    for(int w=0;w<i+1;w++){
        cout<<"*";
    }    
    cout<<endl;
}

int v;
cout<<"Enter the Number of Rows: ";
cin>>v;

for(int i=0;i<v;i++)
{
    for(int b=0;b<v-i;b++){
        cout<<"*";
    }    
    cout<<endl;
}


}

