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
        ll n, w;
        cin >> n >> w;
        
        vector<ll> arr(n);
        
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        sort(arr.begin(), arr.end(), greater<ll>());
        
        ll earnings = 0;
        
        for(ll i = 0; i < n; i++) {
            earnings += arr[i];
            if(earnings >= w) {
                cout << n - (i + 1) << endl;
                break;
            }
        }
    }
}
