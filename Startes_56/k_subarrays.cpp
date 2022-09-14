#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

int main() {
    //Reduce RunTime
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        vector<ll> arr;
        ll n, k;
        cin >> n >> k;

        ll as = 0;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            as = gcd(as, x);
            arr.push_back(x);
        }
        ll x = 0;
        ll kaa = 0;
        for (int i = 0; i < n; i++) {
            x = gcd(x, arr[i]);
            if (x == as) {
                kaa++;
                x = 0;
            }
        }

        if (kaa >= k) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}