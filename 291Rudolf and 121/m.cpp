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
    vector<ll> v(n);
    for (ll i=0;i<n;i++) cin>>v[i]; 
    // cout<<"ans:";
    ll c=0,p=0;
    for (ll i=1;i<n-1;i++) {
        c=v[i-1];
        p=2*c;
        v[i-1]-=c;
        v[i+1]-=c;
        v[i]-=p;
        if(v[i]<0 or v[i-1]<0 or v[i+1]<0) {
            no;
            return;
        }
    }

    ll sum=0;
    sum=accumulate(v.begin(),v.end(),sum);

    if (sum!=0) {
        no;
        return;
    }
    yes;
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