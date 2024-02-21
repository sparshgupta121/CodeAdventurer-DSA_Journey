#include<iostream>
#include<vector>
#include <limits.h>

using namespace std;

// void transpose(int arr[][3], int rows, int cols)
// {

//     for(int i=0;i<rows;i++){
//         for(int j=i;j<cols;j++){

//             swap(arr[i][j],arr[j][i]);
//         }
//     }

// }

// void printarr(int arr[][3],int rows,int cols){

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){

//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }

int main(){

    // vector<int> mkb;
    // mkb.push_back(5);
    // cout<<mkb[0];


    // int rows=3;

    // int cols=3;

    // int arr[3][3]={{2,8,6},{1,4,6},{5,7,84}};

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //     cout<<brr[i][j]<<" ";

    //     }

    //     cout<<endl;
    // }

    // cout<<"max number\n";

    // int max=INT_MIN;

    // for(int j=0;j<3;j++){
    //     for(int i=0;i<3;i++){
    //     if(arr[i][j]>max)
    //     max=arr[i][j];

    //     }

    // }

    // cout<<max<<endl;

    // cout<<"min number\n";

    // int min=INT_MAX;

    // for(int j=0;j<3;j++){
    //     for(int i=0;i<3;i++){
    //     if(brr[i][j]<min)
    //     min=brr[i][j];

    //     }

    // }
    //     cout<<min<<endl;


    // printarr(arr,rows,cols);
    // cout<<endl;
    // transpose(arr, rows, cols);
    // cout<<"transporsed"<<endl;
    // printarr(arr,rows,cols);

vector<vector<int> >arr;

vector<int>a{1,2,3};
vector<int>b{4,5,6};
vector<int>c{7,8,9};

arr.push_back(a);

arr.push_back(b);
arr.push_back(c);

for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";

    }
    cout<<endl;
}


vector<vector<int> >arr1(5,vector<int>(5,-8));


        cout<<arr1[2][3]<<" "<<endl;

for(int i=0;i<arr1.size();i++){
    for(int j=0;j<arr1[i].size();j++){
        cout<<arr1[i][j]<<" ";

    }
    cout<<endl;
}


}