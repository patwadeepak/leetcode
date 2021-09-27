#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;

int maximumDifference(vector<int>& nums) {
    int maxDiff = -1;
    for(int i=0; i<nums.size()-1; i++){
        for(int j = i+1; j<nums.size(); j++){
            if(nums[i] < nums[j]) 
                maxDiff = max(maxDiff, nums[j] - nums[i]);
        }
    }
    return maxDiff;
}

int main(){
    vector<int> nums = {7,1,5,4};
    // vector<int> nums = {9,4,3,2};
    // vector<int> nums = {1,5,2,10};
    int result = maximumDifference(nums);
    cout << result << endl;
}
