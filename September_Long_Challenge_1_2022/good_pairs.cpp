#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define ll long long

int main() {
    //Reduce RunTime
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll arr[n];

        unordered_map<ll, ll> m;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            m[arr[i]]++;
        }

        ll count = 0;
        for (auto x : m) {
            count += (x.second * (x.second - 1)) / 2;
        }

        cout << count << endl;
    }
}
