#include<iostream>
#include<vector>
using namespace std;



int find(vector<int>arr){

    int ans=0;
    for (int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;

}

int main(){

// vector<int>ar1r;

// int ans=(sizeof(ar1r)/sizeof(int));
// cout<<ar1r.size()<<endl;
// cout<<ar1r.capacity()<<endl;
// cout<<ans<<endl;

// ar1r.push_back(5);
// ar1r.push_back(7);
// ar1r.pop_back();

// for(int i=0;i<ar1r.size();i++)
// cout<<ar1r[i]<<" ";

// cout<<endl;

// vector<int> brr(10,50);

// brr.push_back(4);
// brr.push_back(8);



// for(int i=0;i<brr.size();i++)
// cout<<brr[i]<<" ";

// cout<<endl;

// cout<<"The Size of B: "<<brr.size()<<endl;

// cout<<"The capacity of B: "<<brr.capacity()<<endl;



// vector<int> crr{10,50,40,52,12,34,89,71};

// crr.push_back(4);
// crr.push_back(8);

// for(int i=0;i<crr.size();i++)
// cout<<crr[i]<<" ";

// cout<<endl;

// cout<<"The Size of B: "<<crr.size()<<endl;
// cout<<"The capacity of B: "<<crr.capacity()<<endl;


// cout<<endl;


// //Unique Element in Array

// int n;
// cout<<"enter the size of n:"<<endl;
// cin>>n;

// vector<int>arr(n);

// cout<<"enter element: "<<endl;

// for(int i=0;i<n;i++){
//     cin>>arr[i];

// }

// int uqelem=find(arr);

// cout<<"Unique elemnt:"<<uqelem<<endl<<endl;


// //  union of arrays


// int z;
// cout<<"Enter no of element and elem in ar1: "<<endl;
// cin>>z;
// vector<int> ar1(z);

// for (int i=0;i<z;i++){
//     cin>>ar1[i];
// }


// int m;
// cout<<"Enter no of element and elem in ar2: "<<endl;

// cin>>m;
// vector<int> ar2(m);

// for (int i=0;i<m;i++){
//     cin>>ar2[i];
// }

// vector<int>ans1;

// //pushing elem of arr 

// for (int i=0;i<ar1.size();i++){
//     ans1.push_back(ar1[i]);
// }


// for (int i=0;i<ar2.size();i++){
//     ans1.push_back(ar2[i]);
// }

// cout<<"Final Array is:"<<endl;

// for(int i=0;i<ans1.size();i++){
//     cout<<ans1[i]<<" ";
// }

// cout<<endl;



// int z;
// cout<<"Enter no of element and elem in ar1: "<<endl;
// cin>>z;
// vector<int> ar1(z);

// for (int i=0;i<z;i++){
//     cin>>ar1[i];
// }


// int m;
// cout<<"Enter no of element and elem in ar2: "<<endl;

// cin>>m;
// vector<int> ar2(m);

// vector<int> ans;


// for (int i=0;i<m;i++){
//     cin>>ar2[i];
// }

// for (int i=0;i<ar1.size();i++){
//     int element=ar1[i];
//     for (int j=0;j<ar2.size();j++){
//         if (element==ar2[j]){
//             ar2[j]=-1;
//             ans.push_back(element);
//             break;
//         }

//     }


// }

// cout<<"The Element In the intersection of arrays: ";
// for(int i=0;i<ans.size();i++)
// cout<<ans[i]<<" ";



// int z;
// cout<<"Enter no of element and elem in ar1: "<<endl;
// cin>>z;
// vector<int> arr(z);

// for (int i=0;i<z;i++){
//     cin>>arr[i];
// }

// int sum;
// cout<<"Enter Valur of Sum: "<<endl;
// cin>>sum;

// vector<int> ans;

// for(int i=0;i<arr.size();i++){
//     {
//         for (int j=i+1;j<arr.size();j++){
//             for (int k=j+1;k<arr.size();k++)

//                 if (arr[i]+arr[j]+arr[k]==sum){
//                     cout<<"Pair ="<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
//                 }



//         }
//     }
// }



int n;
cout<<"Enter the Value of n: ";
cin>>n;

vector<int> arr(n);

for(int i=0;i<arr.size();i++){
    cin>>arr[i];
}

int start=0;
int end=arr.size()-1;
int i=0;

while(start<end){

    if(arr[i]==0){
        i++;
        start++;
    }

    else{
    swap(arr[i],arr[end]);
    end--;
    }


}

cout<<"Sorted array is: ";
for (int j=0;j<arr.size();j++){
    cout<<arr[j];
}

}
