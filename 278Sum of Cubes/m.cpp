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
    ll x;
    cin>>x;
    bool cube=true;
    // if(a<0 or b<0) {
    //     cube=false;
    //     return;
    // }
    for(ll i=1;i<cbrt(x);i++) {
			ll y=x-i*i*i;
			ll b=cbrt(y);
			if(b*b*b+i*i*i==x) {
				yes;
				cube=false;
				break;
			}
		}
        if(cube) no;
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