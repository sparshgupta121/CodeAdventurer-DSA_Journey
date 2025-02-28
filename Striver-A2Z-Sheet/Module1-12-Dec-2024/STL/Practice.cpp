#include <iostream>
#include <vector>
using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    for (int i = 2; i < n; i++) {
        cost[i] += min(cost[i - 1], cost[i - 2]);
    }
    return min(cost[n - 1], cost[n - 2]);
}

int main() {
    vector<int> cost = {10, 15, 20};
    cout << "Minimum Cost: " << minCostClimbingStairs(cost) << endl;
    return 0;
}

int mincost(vector<int>inp){

    int n = inp.size();

    for(int i=2;i<n;i++){
        inp[i]+=min(inp[i-1],inp[i-2]);
    }
    return min(inp[n-1],inp[n-2]);

}

bool canJump(vector<int>&nums){
    int maxIndex=0;
    for(int i=0;i<nums.size();i++){
        if(i>maxIndex) return false;
        maxIndex=max(maxIndex,i+nums[i])
    }
    return true;
    
}

