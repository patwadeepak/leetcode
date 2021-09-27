#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;

// copy paste this functions content to leetcode
int arrayNesting(vector<int>& nums) {
    int maxLength = 0;
    unordered_map<int, unordered_set<int>> bag;
    // loop over the index from 0 to nums-1
    for(int i=0; i<nums.size(); i++){
        int j = i;
        //find if nums[i] is in any previous cycles
        for(int k = 0; k<i; k++){
            if(!bag[k].count(nums[i])){
                // check bag[i] set for curr cycle number
                while(!bag[i].count(nums[j])){
                    // if not there add it to cycle and continue the while loop
                    bag[i].insert(nums[j]);
                    j = nums[j];
                }
                maxLength = max(maxLength, (int)bag[i].size());
            }
        }
    }
    return maxLength;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6};
    int result = arrayNesting(nums);
    cout << result << endl;
}
