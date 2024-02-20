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
    ll n, m;
    cin >> n >> m;
    deque<ll>a;
    for(ll i=0;i<n;i++) {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    string s;
    cin >> s;
    vector<ll>v;
    for(ll i=0;i<n;i++) {
        if(s[i]=='L'){
            v.push_back(a.front());
        a.pop_front();
        }else{
            v.push_back(a.back());
        a.pop_back();
        }
    }
    reverse(v.begin(),v.end());
    vector<ll>ans;
    ll multiplier=1;
    for(auto i:v){
        multiplier*=i;
        multiplier%=m;
        ans.push_back(multiplier);
    }
    reverse(ans.begin(),ans.end());
    for(auto i:ans){
        cout << i << " ";
    }
    cout << endl;
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