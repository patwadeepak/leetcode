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

int longestPalindrome(string word1, string word2) {
        reverse(word2.begin(), word2.end());
        
        int i=0, j=0;
        while(i < word1.size() || j < word2.size()){

            if (i < word1.size()){
                
            }
        }
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--){
        string word1, word2;
        cin >> word1 >> word2;
        cout << longestPalindrome(word1, word2) << endl;
    }
}