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

// place given function here

int main(){
    FastIO
    int t; cin >> t;
    while(t--){
        // call given function from here after input
    }
}

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int index, count=0;
        if (ruleKey[0] == 't') index = 0;
        else if (ruleKey[0] == 'c') index = 1;
        else index = 2;
        for(int i=0; i<items.size(); i++){
            if (items[i][index] == ruleValue) count++;
        }
        return count;
    }
};