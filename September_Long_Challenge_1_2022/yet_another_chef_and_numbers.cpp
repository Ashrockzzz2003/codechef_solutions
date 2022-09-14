#include <bits/stdc++.h>
#define ll long long
using namespace std;

const unsigned int M = 1000000007;

/*
string product_of_digits(string n) {
    ll product = 1;
    for (ll i = 0; i < n.length(); i++) {
        if (n[i] - 48 == 0) {
            product = 0;
            break;
        }
        product = product * (n[i] - 48);
    }

    return to_string(product);
}*/

/*
ll count_trailing_zeroes(string n) {
    ll count = 0;

    if (n.size() == 1 && n[0] != '0') {
        return count;
    }

    for (ll i = n.size() - 1; i >= 0; i--) {
        if (n[i] != '0') {
            break;
        }
        count++;
    }
    return count;
}*/

ll count_trailing_zeroes(string n) {

    int count_2 = 0;
    int count_5 = 0;
    for (int i = 0; i < n.size(); i++) {
        if ((n[i] - 48) % 2 == 0) {
            count_2++;
        }
        if ((n[i] - 48) % 5 == 0) {
            count_5++;
        }
    }

    return min(count_2, count_5);
}

int main() {
    //Reduce RunTime
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a, b;
    cin >> a >> b;
    ll sum = 0;
    for (ll i = a+1; i <= b; i++) {
        sum += count_trailing_zeroes(to_string(i));
    }

    cout << sum%M << endl;
}
