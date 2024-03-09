#include <iostream>
#include<vector>
#include<set>
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
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    set<ll> s(a.begin(),a.end());
    if(n==2){
        yes;
        return;
    }
    else if(s.size()==1) {
        yes;
        return;
    }else if(s.size()>=3) {
        no;
        return;
    }else if(s.size()==2) {
        ll x = *s.begin();
        ll y = *s.rbegin();
        for(ll i=0;i<n;i++){
            if(a[i]==x) x++;
            else y++;
        }
        if(abs(x-y)<=1) {
            yes;
            return;
        }
    }
    no;
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