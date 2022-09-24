#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	//Reduce RunTime
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    
    while(t--){
        ll l, k;
        cin >> l >> k;
        
        if(l%k == 0){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
}
