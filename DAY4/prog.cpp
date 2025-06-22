#include<iostream>
using namespace std;

int main(){

    cout<<"Enter the number of rows: ";
    int n;
    cin>>n;

    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(col<n-row-1)
                cout<<" ";
            else
                cout<<"* ";
            
        }
        cout<<endl;
    }



// int nu;
// cout<<"Enter the number of rows";
// cin>>nu;

    for(int row1=0;row1<n;row1++){
        for(int col1=0;col1<n;col1++){
            if(col1<row1){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }

            }
            cout<<endl;        }


            int no;
            cout<<"Enter the No: ";
            cin>>no;

            for(int row2=0;row2<no;row2++){
                    for(int col2=0;col2<no-row2-1;col2++){
                        cout<<" ";
                    }
                    for(int col2=0;col2<2*row2+1;col2++){
                        if(col2==0 || col2==2*row2)
                        cout<<"*";

                         else
                        cout<<" ";

                   }

                   cout<<endl; 


            }


        for(int row2=0;row2<no;row2++){
                    for(int col2=0;col2<row2;col2++){
                        cout<<" ";
                    }
                    for(int col2=0;col2<2*no-2*row2-1;col2++){
                        if(col2==0 || col2==2*no-2*row2-2)
                        cout<<"*";

                         else
                        cout<<" ";

                   }

                   cout<<endl; 


            }

        for(int row=0;row<n;row++){
            for(int col=0;col<n-row;col++){
                cout<<"*";
            }
            
        
        for(int col=0;col<2*row+1;col++){
          
                cout<<" ";
          
            }
               for(int col=0;col<n-row;col++){
                cout<<"*";
            }
            
        

       
        cout<<endl; 
            }

            for(int row=0;row<n;row++){

                for(int col=0;col<row+1;col++){
                    cout<<"*";
                }

                for(int col=0;col<2*n-2*row-1;col++){
                    cout<<" ";
                }
                for(int col=0;col<row+1;col++){
                    cout<<"*";
                }

                cout<<endl;
            }
        }



    



