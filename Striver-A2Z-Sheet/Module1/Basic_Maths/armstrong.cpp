#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){

    int digits=int(log10(n))+1;
    return digits;
}

bool isArmstrong(int n) {
        int x = n ;
        int newNum = 0;
        int digits = countDigits(x);

        while(n>0){
            int lastDigit = n%10;
            int sum = 0;           
          
            int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= lastDigit;
        }

        newNum += power;
        n /= 10;

        }

        cout<<newNum<<endl;

        if(newNum==x){
            return true;
        } 
        else {
            return false;
        }
    }

int main(){

    int x;
    cin>>x;

    if(isArmstrong(x)){
        cout<<"Yes Armstrong ";
    } else cout<<"Not Armstrong";


}