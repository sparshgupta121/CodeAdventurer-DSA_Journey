#include<iostream>
#include<vector>
using namespace std;

bool binarysearch(int arr[][4],int rows,int cols,int target){

    int start=0;
    int end=rows*cols-1;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        int rowindex=mid/cols;
        int colindex=mid%cols;
        if(arr[rowindex][colindex]==target){
            return true;
        }

        else if(arr[rowindex][colindex]<target){
            start=mid+1;

        }

        
        else{
            end=mid-1;

        }
        mid=start+(end-start)/2;
    }

    return false;
    




}

int main(){


    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int rows=5;
    int cols=4;
    int target=25;

 bool ans=binarysearch(arr,rows,cols,target);
    if(ans){
        cout<<"Target found";
        
    }

    else{
        cout<<"Not Found";
    }


}