#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    //Reduce RunTime
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll min = 1, max_diff = m;
        ll max_sum = 0;

        for (int i = 0; i < n; i++) {
            max_sum += max(abs(arr[i] - 1), abs(arr[i] - max_diff));
        }

        cout << max_sum << endl;
    }
}
