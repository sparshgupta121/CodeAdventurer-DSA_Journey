#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cout<<"Enter String: ";
    cin>>s;

    int hash[26]={0};

    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    int q;
    cout<<"No of char to search: ";
    cin>>q;

    while(q--){
        char n;
        cin>>n;

        cout<<hash[n-'a']<<endl;
    }

}