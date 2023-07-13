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
        ll n, k;
        cin >> n >> k;
        
        ll nap_count = 0;
        
        string schedule;
        cin >> schedule;
        
        if (n == 0) {
            cout << 0 << endl;
        }
        
        ll i = 0;
        while(i < n) {
            if (schedule[i] == '1') {
                i++;
            }
            else {
                // '0' is found. check for k consecutive zeroes
                bool flag = true;
                for(ll j = i; j < i+k; j++) {
                    if (schedule[j] == '1') {
                        flag = false;
                        i = j;
                        break;
                    }
                }
                
                if (flag) {
                    i = i + k;
                    nap_count++;
                }
            }
        }
        
        cout << nap_count << endl;
    }
}
