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
        ll n;
        cin >> n;
        
        string s;
        cin >> s;
        
        ll nice_pair = 0;
        
        for(ll i = 0; i < n; i++) {
            for (ll j = i + 1; j < n && j <= i+9; j++) {
                if (j - i == abs((s[j] - 48) - (s[i] - 48))) {
                    nice_pair++;
                }
            }
        }
        
        cout << nice_pair << endl;
    }
}
