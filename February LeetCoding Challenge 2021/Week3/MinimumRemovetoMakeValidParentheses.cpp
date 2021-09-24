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

void solve() {
    string s; cin >> s;
    unordered_set<int> skip;
    vector<int> deck;
    int n = s.length();
    for(int i=0; i<n; i++){
        if(s[i] == '('){
            deck.push_back(i);
        }
        else if (s[i] == ')'){
            if (deck.size() != 0) deck.pop_back();
            else skip.insert(i);
        }
    }
    for(auto &x : deck) skip.insert(x);
    for(int i=0; i<n; i++){
        if(skip.count(i) > 0)
            continue;
        else cout << s[i];
    }
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--){
        solve();
    }
}