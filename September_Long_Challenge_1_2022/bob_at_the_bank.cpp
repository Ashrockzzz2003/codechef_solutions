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
        int w, x, y, z;
        cin >> w >> x >> y >> z;

        cout << w + (x - y) * z << endl;
    }
}
