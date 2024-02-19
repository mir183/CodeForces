#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    string s;
    cin >> s;
    ll n = s.length();
    ll cnta = count(s.begin(), s.end(), 'A');
    ll cntb = count(s.begin(), s.end(), 'B');
    
    if(cnta>cntb){
        cout<<'A';
    }else{
        cout<<'B';
    }
    cout<<endl;
}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}