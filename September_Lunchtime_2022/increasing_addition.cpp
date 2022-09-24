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
        ll n, q;
        cin >> n >> q;
        
        vector<ll> A(n);
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        
        while(q--){
            ll i, x;
            // i, x -> Parameters of update
            cin >> i >> x;
            
            A[i-1] = x;
            
            ll max = 0;
            
            for(ll j = 0; j < n-1; j++){
                if(A[j] > A[j+1]){
                    if(abs(A[j] - A[j+1]) > max){
                        max = abs(A[j] - A[j+1]);
                    }
                }
            }
            
            cout << max << endl;
        }
    }
}
