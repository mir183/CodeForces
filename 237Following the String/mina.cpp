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
    vector<ll>v(n);
    map<char,ll>mp;
    string s="abcdefghijklmnopqrstuvwxyz";
    for(ll i=0;i<s.size();i++){
            mp[s[i]]=0;
        }
    for(ll i=0;i<n;i++){
        cin>>v[i];
        for(auto j:mp){
            if(j.second== v[i]){
                cout<<j.first;
                mp[j.first]++;
            break;
            }
        }
    }
    cout<<endl;

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