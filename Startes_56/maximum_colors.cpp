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
        vector<ll> colors(3);
        cin >> colors[0] >> colors[1] >> colors[2];

        ll maximum = 0;

        for (int i = 0; i < 3; i++) {
            if (colors[i] != 0) {
                colors[i]--;
                maximum++;
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 3; j++) {
                if (colors[i] > colors[j]) {
                    swap(colors[i], colors[j]);
                }
            }
        }

        if (colors[0] == 1) {
            if (colors[2] >= 2) {
                cout << maximum + 2 << endl;
            }
            else {
                cout << maximum + 1 << endl;
            }
        }
        else if (colors[0] >= 2) {
            cout << maximum + 3 << endl;
        }
        else {
            if (colors[1] == 0) {
                cout << maximum << endl;
            }
            else {
                cout << maximum + 1 << endl;
            }
        }
    }
}
