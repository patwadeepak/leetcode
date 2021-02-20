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

void solve(){
    string s; cin >> s;
    int n = s.length();
    unordered_map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
                                      {'C', 100}, {'D', 500}, {'M', 1000}};
    int sum = roman[s[n-1]];
    for(int i=n-2; i>=0; i--){
        if(roman[s[i]]  < roman[s[i+1]]){
            sum -= roman[s[i]];
        }
        else{
            sum += roman[s[i]];
        }
    }
    cout << sum << "\n";
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--){
        solve();
    }
}