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
        ll n;
        string s;

        cin >> n >> s;
        int count_0 = 0, count_1 = 0;
        for (char c : s) {
            count_0 += (c == '0');
            count_1 += (c == '1');
        }
        if (count_0 == 0) {
            cout << n << " " << 0 << endl;
        }
        else if (count_1 == 0) {
            cout << n << " " << 0 << endl;
        }

        cout << 1 << " " << abs(count_0 - count_1) + 1 << endl;
        for (ll i = 0, q = 0; i < abs(count_0 - count_1); ++i) {
            string t;
            for (ll j = 0; j < (ll)s.size() - 1; ++j) {
                if ((s[j] == '0' && s[j + 1] == '1') || (s[j] == '1' && s[j + 1] == '0')) {
                    q = j;
                    break;
                }
            }
            cout << q + 1 << " " << q + 2 << " " << (count_0 > count_1) << endl;

            for (int j = 0; j < (ll)s.size(); ++j) {
                if (j != q && j != q + 1) {
                    t += s[j];
                }
                else if (j == q) {
                    t += char((count_0 > count_1) + 48);
                }
            }
            s = t;
        }

        cout << 1 << " " << s.size() << " " << 0 << endl;
    }
}