#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;
        
        int count = 0;
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '4') {
                count++;
            }
        }
        
        cout << count << endl;
    }
}
