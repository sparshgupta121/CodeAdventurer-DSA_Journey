#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cout<<"Enter String: ";
    cin>>s;

    map<char,int>mpp;

    for(auto i=0;i<s.size();i++){
        mpp[s[i]]++;
    }

    int q;
    cout<<"How many characters to Search? ";
    cin>>q;

    while(q--){
        char n;
        cin>>n;

        cout<<mpp[n]<<endl;
    }
    
}