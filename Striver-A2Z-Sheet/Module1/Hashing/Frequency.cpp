#include<bits/stdc++.h>

using namespace std;


vector<vector<int>> countFrequencies(vector<int>& nums) {

        vector<vector<int>>ans;

        map<int,int>mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(auto i:mpp){
            ans.push_back({i.first,i.second});
        }

        return ans;

    }

    int main(){

        
        int n;
        cout<<"How many Elements? ";
        cin>>n;

        vector<int>nums(n);


        for(auto& it:nums){
            cin>>it;
        }

        vector<vector<int>>res = countFrequencies(nums);

        for(auto& it:res){
            cout<<it[0]<<" "<<it[1]<<endl;
        }
    }