#include<bits/stdc++.h>
using namespace std;

int findlegth(char arr[]){

int count = 0;

for(int i=0;arr[i]!='\0';i++){
    count++;
}

return count;

}

bool checkpalindrome(char arr[],int n){

    int s=0;
    int e=n-1;

    while(s<=e){

        if(arr[s]!=arr[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }

    return 1;
}

void reverse(char name[],int n){
    int s = 0;
    int e =n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int main(){

    char name[20];
    
    cout<<"Enter Yourname: ";

    cin>>name;

    cout<<"Your name is: "<<name<<endl;

    int len =findlegth(name);
    cout<<"Length of name is "<<len<<endl;

    cout<<"Check Palindrome: "<<checkpalindrome(name,len)<<endl;

}





