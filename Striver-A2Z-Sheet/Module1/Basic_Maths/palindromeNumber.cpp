#include<bits/stdc++.h>
using namespace std;
 bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
            int num=x;
            long revnum=0;
            while(num>0){
                int digit= num % 10;
                revnum = (revnum*10) + digit;
                num= num/10;
            }

            if(revnum==x){
                return true;
            }
            else{
                return false;
            }
        }
}

int main(){

    int x; 
    cout<<"Enter the Number: ";
    cin>>x;


    if(isPalindrome(x)){
        cout<<"is Palindrome";
    }else{
        cout<<"Not a Palindrome";
    }
    
}