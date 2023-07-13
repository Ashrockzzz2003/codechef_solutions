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
        ll n;
        cin >> n;
        
        string towers;
        cin >> towers;
        
        // check for case where no tower is occupied initially
        bool flag = true;
        for (auto &i : towers) {
            if (i == '1') {
                flag = false;
                break;
            }
        }
        
        ll max_free = 0;
        
        if(flag) {
            if (n % 2 == 0) {
                max_free = n / 2;
            } else {
                max_free = (n / 2) + 1;
            }
        } else {
            ll i = 0;
            while (i < n) {
                if (towers[i] == '0') {
                    if (i == 0 && (i + 1 < n && towers[i + 1] == '0')) {
                        max_free++;
                        towers[i] = '1';
                    }
                    else if (i == n - 1 && (i - 1 >= 0 && towers[i - 1] == '0')) {
                        max_free++;
                        towers[i] = '1';
                    }
                    else if ((i - 1 >= 0 && towers[i - 1] == '0') && (i + 1 < n && towers[i + 1] == '0')) {
                        max_free++;
                        towers[i] = '1';
                    }
                }
                i++;
            }
        }
        
        cout << max_free << endl;
    }
    
}