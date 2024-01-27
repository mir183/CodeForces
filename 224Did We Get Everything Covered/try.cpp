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
    ll n,k,m;
    cin >> n >> k >> m;
    string s;
    cin >> s;
    map<char, ll> mp;
    for (char c : s){
        mp[c]++;
    }

    string ans = "";
    bool flag = true;
    for(ll i = 0; i < k; i++){
        char c = 'a' + i;
        if(mp[c] < n) {
            flag = false;
            for(ll j = 0; j < n; j++){
                ans.push_back(c);
            }
            break;
        }
    }
    if(flag)
        {cout << "YES" << endl;}
    else{
        cout << "NO" << endl;
        cout << ans << endl;
    }
    
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