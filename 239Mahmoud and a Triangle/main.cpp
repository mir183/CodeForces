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
    bool ok=false;
    ll n;
    cin>>n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(),v.end());

    for(ll i=2;i<n;i++){
        if(v[i-1]+v[i-2]>v[i]){
            ok=true;
            break;
        }
    }
    if(ok)yes;
    else no;

    return 0;
}