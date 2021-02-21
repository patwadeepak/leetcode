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

string mergeAlternately(string word1, string word2) {
    
    int i = word1.length();
    int j = word2.length();
    int n = i + j;
    
    int a = 0, b = 0;
    string result;
    while(a < i || b < j){
        
        if (a < i){
            result += word1[a];
            a++;
        }
        if (b < j){
            result += word2[b];
            b++;
        }
    }
    return result;
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--){
        string word1, word2;
        cin >> word1 >> word2;
        cout << mergeAlternately(word1, word2) << endl;
    }
}