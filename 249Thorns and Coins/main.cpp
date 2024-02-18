#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='*' and s[i+1]=='*'){
            break;
        }else{
            if(s[i]=='@'){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
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