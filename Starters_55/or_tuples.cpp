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
        long long int P, Q, R;
        cin >> P >> Q >> R;

        long long int rel = 1;

        for (long long int i = 30; i >= 0; i--) {
            long long int x = ((P >> i) & 1) + ((Q >> i) & 1) + ((R >> i) & 1);

            if (x == 1) {
                rel = 0;
            }
            else if (x == 2) {
                continue;
            }
            else if (x == 3) {
                rel *= 4;
            }
        }

        cout << rel << endl;
    }
}