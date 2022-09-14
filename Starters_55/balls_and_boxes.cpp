#include <bits/stdc++.h>
using namespace std;

int main() {
    //Reduce RunTime
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        k = (k) * (k + 1) / 2;
        if (n >= k) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}