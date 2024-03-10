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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) {
        cin>>v[i];
        v[i]=abs(v[i]);
    }
    sort(v.begin(), v.end());
    cout<<abs(v[0])<<endl;
    return 0;
}