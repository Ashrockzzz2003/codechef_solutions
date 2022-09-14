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
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        int k;
        cin >> k;
        set<int> B;
        for (int i = 0; i < k; i++) {
            int temp;
            cin >> temp;
            B.insert(temp);
        }

        for (int i = 0; i < n; i++) {
            if (B.count(A[i]) == 0) {
                cout << A[i] << " ";
            }
        }

        cout << endl;
    }
}