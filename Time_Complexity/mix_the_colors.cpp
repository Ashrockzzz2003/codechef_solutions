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
        ll count = 0;
        ll n;
        cin >> n;
        
        unordered_map<ll, ll> freq;
        for(ll i = 0; i < n; i++) {
            ll temp;
            cin >> temp;
            
            freq[temp]++;
        }
        
        for (auto &key_pair: freq) {
            if (key_pair.second > 1) {
                count += key_pair.second - 1;
            }
        }
        
        cout << count << endl;
    }
}
