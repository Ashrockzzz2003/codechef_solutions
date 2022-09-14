#include<bits/stdc++.h>
using namespace std;

#define int long long
// We make int as default long long int

const int mod = 1000000007;

int pow_fast(int a, int n, int mod) {
    int p = 1;
    while (n) {
        if (n % 2 == 1) {
            p = p * a % mod;
        }
        a = a * a % mod;
        n = n / 2;
    }

    return p;
}


int power_total(int a, int b) {
    int y = pow_fast(2, b, mod - 1);
    if (b >= 30) {
        return pow_fast(a, y + mod - 1, mod);
    }

    return pow_fast(a, (1 << b), mod);
}

int ans(int n, int p, int k) {
    int x = power_total(n, k);
    int y = pow_fast(n, p - 1, mod);
    int z = pow_fast(n - 1, mod - 2, mod);
    int result = pow_fast(x, p, mod);

    return (result - y + mod) % mod * n % mod * z % mod;
}

int32_t main() {
    //Reduce RunTime
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k; 
        cin >> n >> k;

        int sum_of_distinct = 1;

        for (int i = 2; i * i <= n; i++) {
            int p = 0;

            while (n % i == 0) {
                p++;
                n /= i;
            }

            if (p != 0) {
                sum_of_distinct = sum_of_distinct * ans(i, p, k) % mod;
            }
        }

        if (n != 1) {
            sum_of_distinct = sum_of_distinct * ans(n, 1, k) % mod;
        }

        cout << sum_of_distinct << endl;

        return;
    }

    return 0;
}
