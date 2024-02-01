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
        ll a,b;
    cin>>a>>b;
    bool flag=false;
    vector<ll>v(a-1);
    for(auto &i:v)cin>>i;
    for(ll i=0;i<a-1;){
        i+=v[i];
        if(i==b-1){
            flag=true;
            break;
        }
    }
    if(flag)yes;
    else no;
}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}