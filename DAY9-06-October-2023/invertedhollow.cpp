 #include<iostream>
 using namespace std;

 int main(){

    int n;
    cout<<"Enter the value for n: ";
    cin>>n;
    

    for (int row=0;row<n;row++){
                    int i=row;


        for (int col=0;col<n-row;col++){
            i++;
            if (col==0 || col==n-row-1 ||row==0)
            cout<<i;

            else
            cout<<" ";
            
                    
            }
  cout<<endl;
        }
      
    }
 