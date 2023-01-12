#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	  //Reduce RunTime
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    
    while(t--) {
        ll a, b;
        cin >> a >> b;
        
        map<char, int> no_of_sticks = {
            {'0', 6},
            {'1', 2},
            {'2', 5},
            {'3', 5},
            {'4', 4},
            {'5', 5},
            {'6', 6},
            {'7', 3},
            {'8', 7},
            {'9', 6},
        };
        
        string s = to_string(a+b);
        int count = 0;
        
        for(int i = 0; i < s.length(); i++) {
            count += no_of_sticks[s[i]];
        }
        
        cout << count << endl;
    }
}
