#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int sum(int l, int r, int i, vector<int> &nums, vector<int> &muls){
    if(i==muls.size()) return 0;
    int a = muls[i]*nums[l] + sum(l+1, r, i+1, nums, muls);
    int b = muls[i]*nums[r] + sum(l, r-1, i+1, nums, muls);
    return max(a, b);
}

int maximumScore(vector<int>& nums, vector<int>& multipliers) {
    return sum(0, nums.size()-1, 0, nums, multipliers);
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> nums(n), multipliers(m);
        for(int i=0; i<n; i++) cin >> nums[i];
        for(int i=0; i<m; i++) cin >> multipliers[i];
        cout << maximumScore(nums, multipliers) << endl;
    }
}