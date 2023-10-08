#include<iostream>
using namespace std;

long long int fact(int n){
     int sum=1;
    for(int i=1;i<=n;i++){
            sum=sum*i;

    }

        return sum;

}

int main(){

int n;
cout<<"enter the number:";
cin>>n;

long long int ans=fact(n);
cout<<"The Factorial of:"<<n<<" is "<<ans;

return 0;


}