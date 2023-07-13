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
        ll n, l, k;
        cin >> n >> k >> l;
        
        vector<ll> speed(n);
        for(ll i = 0; i < n; i++) {
            cin >> speed[i];
        }
        
        // find max
        ll max_speed = *max_element(speed.begin(), speed.end());
        
        ll max_count = 0;
        for(ll i = 0; i < n - 1; i++) {
            if (speed[i] == max_speed) {
                max_count++;
            }
        }
        
        if (max_count == 0 && max_speed == speed[n - 1]) {
            cout << "Yes" << endl;
        } else {
            // minimum number of units required to attain a speed greater than max_speed
            // speed[n - 1] + unit_count*k = max_speed
            
            if (k == 0) {
                cout << "No" << endl;
            } else {
                ll unit_count = (max_speed - speed[n-1]) / k;
            
                if (k > 0 && k*unit_count <= max_speed) {
                    unit_count += 1;
                }
                
                if (unit_count >= l) {
                    cout << "No" << endl;
                } else if (speed[n - 1] + k*unit_count <= max_speed) {
                    cout << "No" << endl;
                } else if (speed[n - 1] + k*unit_count > max_speed) {
                    cout << "Yes" << endl;
                }
            }
        }
    }
}
