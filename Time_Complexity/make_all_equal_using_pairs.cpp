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
        
        vector<int> arr(1000);
        
        for(int i = 0; i < 1000; i++) {
            arr[i] = 0;
        }
        
        for(int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            
            arr[x-1]++;
        }
        
        cout << n - *max_element(arr.begin(), arr.end()) << endl;
    }
}
