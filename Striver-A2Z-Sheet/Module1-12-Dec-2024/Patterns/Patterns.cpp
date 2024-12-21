#include<bits/stdc++.h>

using namespace std;

void pattern1(){
    
    int n;
    cout<<"Enter Value of Rows:";
    cin>>n;

    for(int rows=0;rows<n;rows++){
        for(int col=0;col<n;col++){
            cout<<"*";
        }
        cout<<endl;
    }   

}

void pattern2(){

    cout<<"Enter the number of rows: ";
    int n;
    cin >>n;

    for(int rows=1;rows<=n;rows++){
        for(int col=1;col<=rows;col++){

        }
    }


}

void pattern3(){
    cout<<"Enter number of rows: ";
    int n;
    cin>>n;

   for(int i=1;i<=n;i++){
        for (int j = 1; j<=i; j++)
        {
            cout<<j<<" ";
        }
		cout<<endl;
        
    }

}

void pattern4(){

    cout<<"Enter the rows: ";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}

void pattern5(){
    cout<<"Enter the number of rows:";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern6(){
    cout<<"Enter the number of rows:";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(){
    cout<<"Enter the number of rows:";
    int n;
    cin>>n;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*n)-1;j++){
            if(j<=n-i || j>=n+i){
                cout<<" ";
            }

            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void pattern8(){

    cout<<"Enter the number of rows:";
    int n;
    cin>>n;

   for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*n)-1;j++){
            if(j<=i-1 || j>=(2*n)+1-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }




}

void pattern9(){
    cout<<"Enter the number of rows:";
    int n;
    cin>>n;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*n)-1;j++){
            if(j<=n-i || j>=n+i){
                cout<<" ";
            }

            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

      for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*n)-1;j++){
            if(j<=i-1 || j>=(2*n)+1-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

}

void pattern10(){

    cout<<"Enter the number of rows:";
    int n;
    cin>>n;
    
      for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }


}

void pattern11(){

    cout<<"ENter the number of rows: ";
    int n;
    cin>>n; 

    for(int i=1;i<=n;i++){
        int start=1;

        if(i%2==0) start=0;
        else start = 1;

        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout << endl;
    }
}

void pattern12 ( ){

    cout<<"Enter the number of Rows: ";
    int n;
    cin>>n;

    int spaces = 2*n-2;

    for(int i=1;i<=n;i++){

        for(int j=1 ;j<=i;j++){
            cout<<j;
        }

        for (int j=1;j<=spaces;j++){
            cout<<" ";
        }

         for(int j= i; j>=1;j--){
        cout<<j;
    }


        cout<<endl;
        spaces-=2;
    }
}

void pattern13(){

    cout<<"Enter the number of Rows: ";
    int n;
    cin>>n;
    
    int val=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<val<<" ";
            val++;
        }
        cout<<endl;

    }
}

void pattern14(){

    cout<<"Enter the number of Rows: ";
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        char val= 'A';
        
        for(int j=0;j<=i;j++){
            cout<<val<<" ";
            val = val+1;
        }
        cout<<endl;

    }
}

void pattern15(){

    cout<<"ENter the number of Rows: ";
    int n;
    cin>>n;

    for(int i= 1;i<=n;i++){
        char val = 'A';
        for(int j=1;j<=n-i+1;j++){
            cout<<val;
            val++;
        }
        cout<<endl;
    }
}

void pattern16(){
    cout<<"Enter the number of Rows: ";
    int n;
    cin>>n;

    char val='A';

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<val<<" ";
        }
        cout<<endl;
        val+=1;
    }
}

void pattern17(){
    cout<<"Enter the number of Rows: ";
    int n;
    cin>>n;

    int start=1;


    for(int i=1;i<=n;i++){

        char letter ='A';

        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }


         bool firstDecrement = true; // To handle the first decrement
        for (int j = 1; j <= start; j++) {
            if (j <= i) {
                cout << letter;
                letter++;
            } else {
                if (firstDecrement) {
                    letter -= 2; // First decrement by 2
                    firstDecrement = false; // Ensure this happens only once
                } else {
                    letter--; // Subsequent decrements by 1
                }
                cout << letter;
            }
        }

        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        start+=2;
        cout<<endl;

    }
}

void pattern18(){
    cout<<"Enter the number of Rows: ";
    int n;
    cin>>n;


    for(int i=1;i<=n;i++){
    char val='A'+n-i;
        for(int j=1;j<=i;j++){
            cout<<val<<" ";
             val+=1;

        }
        cout<<endl;
    }
}

void pattern19(){
    cout<<"Enter the Number of Rows: ";
    int n;
    cin>>n;

int start =0;
int space=2*(n-1);

    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=n+1-i;j++){
            cout<<"*";
        }
        for(int j=1;j<=start;j++){
            cout<<" ";
        }
        start+=2;

        for(int j=1;j<=n+1-i;j++){
            cout<<"*";
        }

        cout<<endl;

    }
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        space-=2;

        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;

    }
}

void pattern20(){
    cout<<"Enter the number of rows:";
    int n;
    cin>>n;

    int spacez = 2*(n-1);
    
      for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //spaces

    for(int j=1;j<=spacez;j++){
        cout<<" ";
    }
    spacez-=2;

        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

   


     for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }

        for(int j=1;j<=2*i;j++){
        cout<<" ";
    }    
      for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }


}


void pattern21(){
    cout<<"Enter the number of rows: ";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n){
                cout<<"* ";
            }
            else if(j==1 || j==n){
                cout<<"* ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }

}

void pattern22(){
    cout<<"Enter the No of Rowws: ";
    int n;
    cin>>n;

    for(int i = 0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = 2*(n-1)-j;
            int bottom = 2*(n-1)-i;

            cout<<(n-min(min(top,bottom),min(left,right)));
        }
        cout<<endl;

    }
}

int main(){
pattern1();
pattern2();
pattern3();
pattern4();
pattern5();
pattern6();
pattern7();
pattern8();
pattern9();
pattern10();
pattern11();
pattern12();
pattern13();
pattern14();
pattern15();
pattern16();
pattern17();
pattern18();
pattern19();
pattern20();
pattern21();
pattern22();


}