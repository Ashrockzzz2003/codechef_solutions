#include <bits/stdc++.h>
using namespace std;

int main() {
	//Reduce RunTime
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int a, b;
        cin >> a >> b;
        
        if(a == 1 || b == 1){
            cout << "No" << endl;
        }
        else if(a%2 != 0 && b%2 != 0){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
}
