#include<bits/stdc++.h>

using namespace std;

vector<int> fabonacciseries(int n){

    vector<int> arr(n+1);


    if(n==0){
        arr[0]=0;
        return arr;
    }

    else if(n==1){
       arr[0]=0;
       arr[1]=1;
       return arr;
    }

    arr[0]=0;
    arr[1]=1;

    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr;


}

int main(){
//given n f0+------fn

int n;
cout<<"enter n:";
cin>>n;

vector<int>ans = fabonacciseries(n);
int sum=0;
for (auto i:ans){
    sum+=i;
}
cout<<sum;

}
