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
        ll N;
        cin >> N;
        
        int n = 0;
        
        while (N % 10 == 0) {
            N /= 10;
            n++;
        }
        
        while (N%2 == 0) {
            N /= 2;
            n--; // Pairing 2's with 10's to make 20
        }
        
        if (N == 1 && n >= 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}