#include<iostream>
#include<vector>

using namespace std;

int binary_search(int arr[],int size,int target){

int start=0;
int end=size-1;

int mid=(start+end)/2;

while(start<=end){

    int element=arr[mid];

    if(element==target){
        return mid;
    }

    else if (target<element){

        end=mid-1;
        
    }

    else if(target>element){
        start=mid+1;

    }

    
    mid=(start+end)/2;


    
}

    return -1;

}

int firstocc(vector<int>v,int target){

    int ans=-1;
    int s=0;
    int e=v.size();
    int mid=(s+(e-s)/2);

    while(s<=e){

        if(v[mid]==target){
            ans=mid;
            e=mid-1;
        }

        else if(target>v[mid] ){
            s=mid+1;
        }

        else{
            e=mid-1;
        }
        mid=(s+(e-s)/2);

    }

return ans;
}

int main(){
    vector<int> v{1,2,2,2,2,2,3,3,3,3,3,3,4,4,4,4,6,7};

    int arr[]={2,4,5,7,8,9,11,13,16};
    int size=9;
    int target=5;

    int indexoftarget=binary_search(arr,size,target);

    if(indexoftarget==-1){
        cout<<"element not found.";

    }

    else
        cout<<"element "<<target<<" found at index: "<<indexoftarget;

    cout<<endl;

    int index=firstocc(v,target);

    cout<<"Found at : "<<index;

}