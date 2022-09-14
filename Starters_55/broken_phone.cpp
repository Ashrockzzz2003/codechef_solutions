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

        if (x < y) {
            cout << "REPAIR" << endl;
        }
        else if (y < x) {
            cout << "NEW PHONE" << endl;
        }
        else if (x == y) {
            cout << "ANY" << endl;
        }
    }
}