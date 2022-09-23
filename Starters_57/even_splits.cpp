#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        string bin;
        cin >> bin;
        if(bin.size() <= 2){
            cout << bin << endl;
        }
        else{
            int count_1 = 0, count_0 = 0;
            for(int i = 0; i < bin.size(); i++){
                if(bin[i] == '1'){
                    count_1++;
                }
                else{
                    count_0++;
                }
            }
            
            for(int i = 0; i < count_0; i++){
                cout << "0";
            }
            for(int i = 0; i < count_1; i++){
                cout << "1";
            }
            cout << endl;
        }
    }
}
