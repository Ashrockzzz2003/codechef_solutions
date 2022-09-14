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
        int x, y;
        cin >> x >> y;

        cout << min((3 * x) - (2 * y), y) << " " << y << " " << max((3 * x) - (2 * y), y) << endl;
    }
}