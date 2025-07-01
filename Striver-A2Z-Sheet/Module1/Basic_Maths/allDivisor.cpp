#include<bits/stdc++.h>
using namespace std;

void Divisors(int num){

    vector<int> ans;
    for (int i=1;i*i<=num;i++){
        if(num%i==0){
            ans.push_back(i);
            if(num/i!=i){
                ans.push_back(num/i);
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(auto it:ans ){
        cout<<it<<" "; 
    }

}

int main(){

    int x;
    cout<<"Enter Number";
    cin>>x;

    Divisors(x);
}