#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fasterio;
    // Your code here
    // Always use ll(long long int), int may give TLE
    string side;
    cin >> side;
    string s;
    cin >> s;
    string qwerty = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i = 0; i < s.size(); i++) {
        for(int j = 0; j < qwerty.size(); j++) {
            if(s[i] == qwerty[j]) {
                if(side == "R") {
                    cout << qwerty[j-1];
                }
                else {
                    cout << qwerty[j+1];
                }
            }
        }
    }
    cout << endl;

    return 0;
}