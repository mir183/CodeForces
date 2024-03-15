#include <iostream>
#include <vector>
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
    // vector<ll> v(n);
    // for(ll i=0;i<n;i++) cin>>v[i];
    ll mx=LLONG_MIN;
    ll zero=0, one=0;
    for(ll i=0;i<n;i++) {
        ll x;
        cin>>x;
        if(x==0) zero++;
        else {
            one++;
            zero--;
    }
    if(zero>mx) mx=zero;
    if(zero<0) zero=0;
    }
    cout<<one+mx<<endl;

    return 0;
}