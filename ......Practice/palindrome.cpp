#include<bits/stdc++.h>

using namespace std;

bool palindrome(int n){

    int orgnum=n;
    vector<int>arr;

    while(n>0){
        arr.push_back(n%10);
        n=n/10;
    }

    int s=0;
    int e=arr.size()-1;

    while(s<e){
        if(arr[s]!=arr[e]){
            return false;
        }

        s++;
        e--;
    }

    return true;  
}

bool divisibleby9(int n){

    int sum=0;

    while(n>0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }

    if(sum%9==0){return true;}
    return false;

}

int main(){

    int n;
    cin>>n;

    cout<<palindrome(n);
    cout<<divisibleby9(n);


}
