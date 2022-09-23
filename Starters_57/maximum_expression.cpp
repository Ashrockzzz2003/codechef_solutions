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
        
        string exp;
        cin >> exp;
        
        ll count_plus = 0, count_minus = 0;
        vector<ll> digits;
        
        for(auto i:exp){
            if(i == '-'){
                count_minus++;
            }
            else if(i == '+'){
                count_plus++;
            }
            else{
                digits.push_back(i);
            }
        }
        
        sort(digits.begin(), digits.end());
        
        string max_exp = "";
        
        for(auto i:digits){
            if(count_minus != 0){
                max_exp += i;
                max_exp += '-';
                count_minus--;
            }
            else if(count_plus != 0){
                max_exp += i;
                max_exp += '+';
                count_plus--;
            }
            else{
                max_exp += i;
            }
        }
        
        reverse(max_exp.begin(), max_exp.end());
        
        cout << max_exp << endl;
    }
}
