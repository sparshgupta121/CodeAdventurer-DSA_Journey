#include<iostream>
#include<vector>

using namespace std;

int binarysearch(int arr[],int size,int target){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(mid-1>0 && arr[mid-1]==target){
            return mid-1;
        }
        else if(mid+1<size && arr[mid+1]==target){
            return mid+1;
        }

        else if(arr[mid]<target){
            start=mid+2;
        }
        else{
            end=mid-2;
        }
    mid=start+(end-start)/2;

    }

return -1;


}


int divide(int num,int divisor){

    int start=0;
    int end=abs(num);
    int ans=-1;
    int mid= start+(end-start)/2;

    while(start<=end){

        if(abs(divisor*mid)==abs(num)){
            ans= mid;
            break;
        }

        else if(abs(divisor*mid)>abs(num)){
            end=mid-1;

        }

        else if(abs(divisor*mid)<abs(num)){
            ans=mid;
            start=mid+1;
        }

        mid=start+(end-start)/2;






    }

    if((num>0 && divisor>0) || (num<0 && divisor<0))
        return ans;
    else
        return -ans;

}


int main(){

    // search in nearly sorted array 

    int arr[]={10,3,40,20,50,80,70};
    int target= 50;
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans= binarysearch(arr,size,target);

    if (ans==-1){
        cout<<"Not Found"<<endl;
    }

    else 
        cout<<ans<<endl;


    int num;
    cout<<"Enter the valure of number:";
    cin>>num;

    int divisor;
    cout<<"Enter the value of Divisor: ";
    cin>>divisor;

    int ans1=divide(num,divisor);
    
    cout<<ans1;
    

}