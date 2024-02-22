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
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,m,k;
        cin >> n >> m >> k;
        ll c=n/k;
        if(c>=m) cout << m << endl;
        else{
            ll rem = m-c;
            ll ans = (rem/(k-1));
            if(rem%(k-1)!=0) ans++;
            cout << c-ans << endl;
        }
    }
    
    return 0;
}