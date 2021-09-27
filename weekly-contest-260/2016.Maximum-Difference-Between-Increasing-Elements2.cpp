#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;

int maximumDifference(vector<int>& nums) {
    int minNum = INT_MAX, maxDiff = INT_MIN;
    for(int i=0; i<nums.size(); i++){
        minNum = min(minNum, nums[i]);
        if(minNum < nums[i])
            maxDiff = max(maxDiff, nums[i] - minNum);            
    }
    return (maxDiff==INT_MIN) ? -1 : maxDiff;
}

int main(){
    vector<int> nums = {7,1,5,4};
    // vector<int> nums = {9,4,3,2};
    // vector<int> nums = {1,5,2,10};
    int result = maximumDifference(nums);
    cout << result << endl;
}
