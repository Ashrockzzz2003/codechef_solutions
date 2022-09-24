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
        ll n;
        cin >> n;
        
        if(n <= 3){
            cout << -1 << endl;
        }
        else if(n == 4){
            cout << "2 4 1 3" << endl;
        }
        else{
            for(int i = 1; i <= n; i += 2){
                cout << i << " ";
            }
            for(int i = 2; i <= n; i += 2){
                cout << i << " ";
            }
            cout << endl;
        }
    }
}
