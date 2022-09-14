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
        int x;
        cin >> x;

        if (x > 98) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}