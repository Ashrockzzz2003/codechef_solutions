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
    
    while (t--) {
        ll n;
        cin >> n;
        
        vector<ll> arr(n);
        
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        unordered_map<ll, ll> freq;
        
        for(ll i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
        
        vector<ll> freq_arr;
        
        for (auto &kp: freq) {
            freq_arr.push_back(kp.second);
        }
        
        sort(freq_arr.begin(), freq_arr.end(), greater<ll>());
        
        if (freq_arr.size() == 1) {
            cout << (freq_arr[0] + 1) / 2 << endl;
        } else {
            if (freq_arr[0] == freq_arr[1]) {
                cout << freq_arr[0] << endl;
            } else {
                cout << max((freq_arr[0] + 1) / 2, freq_arr[1]) << endl;
            }
        }
        
    }
}
