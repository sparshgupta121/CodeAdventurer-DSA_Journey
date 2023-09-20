#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter the number of Rows: ";
cin>>n;
for (int row=0;row<n;row++){
    int start=row+1;
    for(int col=0;col<row+1;col++){
        
            cout<<start<<" ";
            start=start+1;

    }
    cout<<endl;
}

 for (int row=0;row<n;row++){
 
    for(int col=0;col<n-row-1;col++){
        cout<<" ";
    }

    for(int col=0;col<row+1;col++){
        
            cout<<row+col+1;


 }
 int start=2*row;
for(int col=0;col<row;col++){
        
            cout<<start;
            start--;


 }

cout<<endl;
 }

for (int row=0;row<n;row++){
    for (int col=0;col<n-row-1;col++){
        cout<<" ";
    }
    
    if(row<n-1){
    for (int col=0;col<2*row+1;col++)
        {
        int start =row+1;
        if(  col==2*row){
            
            cout<<start;
            start++;
           
        }

        else if(col==0){
            cout<<"1";
        }
        
        else
        cout<<" ";
    }

        cout<<endl;

    

    }

    else if(row==n-1){
        int start=1;
        for(int col=0;col<2*row+1;col++){
            if(col%2==0){
            cout<<start;
            start++;
            }
            else
            cout<<" ";
        }
    }
    else{

    }
    


}

bool a=true;
bool b=false;

cout<<(a&b)<<endl;
cout<<(a|b)<<endl;

int x=12;
x= x>>1;

cout<<x<<endl;

int n=7;
int c=++n +1;
cout<<c<<endl;


int f=5;
cout<<++f*++f<<endl;

int l=5;
for(int i=0;i<l;i++)
{
    cout<<"gupta"<<endl;
    break;
}

cout<<"Sparsh";
}