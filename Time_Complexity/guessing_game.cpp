#include <bits/stdc++.h>
using namespace std;
#define ll long long

void get_lowest_fraction(ll a, ll b) {
    cout << (a / __gcd(a, b)) << "/" << (b / __gcd(a, b)) << endl;
}

int main() {
	//Reduce RunTime
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    
    while(t--) {
        ll n, m;
        cin >> n >> m;
        
        // number of odd numbers between 1 and n
        ll odd_1 = (n % 2 != 0) ? (n / 2 + 1) : (n / 2);
        
        // number of odd numbers between 1 and n
        ll odd_2 = (m % 2 != 0) ? (m / 2 + 1) : (m / 2);
        
        // alice -> odd, bob -> even
        // alice -> even, bob -> odd
        
        get_lowest_fraction(((odd_1)*(m - odd_2) + (n - odd_1)*(odd_2)), n*m);
    }
}
