#include <iostream>
using namespace std;

int main(){

//     int marks[5];
//     cout<<&marks<<endl;

//     int arr[]={2,4,5,8,42};
//     int th = sizeof(arr) / sizeof(int);
//     for (int i=0;i<th;i++){ 
//     cout<<arr[i]<<" "; 
// }

    // cout<<"Array Created"<<endl;

    int arr[5];

    for (int i=0;i<5;i++){
        cin>>arr[i];

    }

    for (int i=0;i<5;i++)
    cout<<2*arr[i]<<" ";

}