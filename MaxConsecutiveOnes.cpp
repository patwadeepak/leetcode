#include <bits/stdc++.h>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0, countMax = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1) {
                count++;
                countMax = (countMax < count) ? count : countMax;
            }
            else count = 0;
        }
        return countMax;
}

int main() {
    vector<int> nums = {1, 0, 1, 1, 0, 1};
    cout << findMaxConsecutiveOnes(nums) << endl;
}