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
    ll f=max<ll>(1,(n-52));
    ll s=max<ll>(1,(n-f-26));
    ll t3=max<ll>(1,(n-f-s));
    char a1='a'+f-1;
    char a2='a'+s-1;
    char a3='a'+t3-1;

    cout<<a1<<a2<<a3<<endl;
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