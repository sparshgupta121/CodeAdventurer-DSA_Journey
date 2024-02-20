#include <iostream>
#include <vector>
using namespace std;

int main(){

//     int n;
//     cout<<"Enter Size of Array: "<<endl;
//     cin>>n;
  
//     vector<int>nums(n);
    
//       cout<<"Size of Nums:"<<nums.size()<<endl;
//      cout<<"capacity of Nums:"<<nums.capacity()<<endl;
    

// cout<<"Enter Values:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>nums[i];

//     }

//     int size=nums.size();
    
//     vector<int>ans;

//     for(int i=0;i<2*nums.size();i++){

//         if (i<nums.size()){
//             ans.push_back(nums[i]);


//         }

//         if (i>=nums.size()){

//             ans.push_back(nums[i-size]);

//         }

    

//         }


// ans.push_back(90);
//       for (auto x:ans){
//         cout<<x<<" ";
//       }

//       cout<<"Size of anss:"<<ans.size()<<endl;
//      cout<<"capacity of anss:"<<ans.capacity()<<endl;


int n;
cout<<"Enyer no of employee:"<<endl;
cin>>n;


vector<int>id(n);
vector<string>name(n);
vector<string>code(n);
vector<string>dept(n);
vector<string>designation(n);

for(int i=0;i<n;i++){
    cout<<"Emp Id: ";
    cin>>id[i];

    cout<<"Name: ";
    cin>>name[i];

    cout<<"code: ";
    cin>>code[i];

    cout<<"dept: ";
    cin>>dept[i];

    cout<<"designation: ";
    cin>>designation[i];





}


cout<<"Enter Emp Id to Search: ";

int m;
cin>>m;


int index=-1;
for(int i=0;i<n;i++){
    if(id[i]==m)
    index=i;

    } 

    if(0<index &&index<n){

        cout<<"Emp Id: "<<id[index]<<endl;

        cout<<"Name: "<<name[index]<<endl;

        cout<<"code: "<<code[index]<<endl;

        cout<<"dept: "<<dept[index]<<endl;

        cout<<"designation: "<<designation[index]<<endl;

    }

    else
        cout<<"Invalid Emp ID.";


}



   



















