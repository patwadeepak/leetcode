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

vector<int> minOperations(string boxes) {
    int n = boxes.size();
    vector<int> sum(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum[i] += abs(i-j)*(boxes[j] - '0');
        }
    }
    return sum;
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--){
        string boxes;
        cin >> boxes;
        auto result = minOperations(boxes);
        for(auto &x : result) cout << x << " ";
        cout << endl;
    }
}