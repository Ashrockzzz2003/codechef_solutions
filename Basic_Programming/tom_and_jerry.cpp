#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	  //Reduce RunTime
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    
    while(t--) {
        ll a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        
        if(abs(a - c) + abs(b - d) == k) {
            cout << "YES" << endl;
        }
        else if (abs(a - c) + abs(b - d) > k) {
            cout << "NO" << endl;
        }
        else if((k - (abs(a - c) + abs(b - d))) % 2 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
