#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl


void solve(){
    ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<ll, ll> mp;
        for(ll i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        vector<ll> ans;
        for(auto i : mp)
        {
            if(i.second>1){
                ans.push_back(i.first);
            }
        }
        if(ans.size()<2){
            cout << -1 << endl;
            return;
        }
        for(ll i=0;i<n;i++){
            if(v[i]==ans[0]){
                ans[0]=-1;
                cout<<2<<" ";
            }else if (v[i]==ans[1]){
                ans[1]=-1;
                cout<<3<<" ";

            }
            else cout<<1<<" ";
        }
        cout<<endl;

}


int main() {
    fasterio;
    // Your code here
    // Always use ll(long long int), int may give TLE
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}