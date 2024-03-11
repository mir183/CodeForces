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
    cin>>n;
    string s;
    // getline(cin,s);
    cin>>s;
    ll ans=0;
    for (ll i=0;i<n-2;i++) {
        string temp=s.substr(i,3);
        if (s.substr(i,3)=="map" or s.substr(i,3)=="pie") {
            i+=2;
            ans++;
        }
    }
    // cout<<"ans: ";
    cout<<ans<<endl;
}

int main() {
    fasterio;
    // Always use ll, ll may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}