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
        int a, x, b, y;
        cin >> a >> x >> b >> y;

        if ((a / x) > (b / y)) {
            cout << "ALICE" << endl;
        }
        else if ((a / x) < (b / y)) {
            cout << "BOB" << endl;
        }
        else {
            cout << "EQUAL" << endl;
        }
    }
}
