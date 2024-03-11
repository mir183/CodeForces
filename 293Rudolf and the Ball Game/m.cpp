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
    ll n,m,x;
    cin>>n>>m>>x;
    vector<pair<ll,char>>tr;

    for (ll i=0;i<m;i++) {
        ll r;
        char c;
        cin>>r>>c;
        tr.push_back(make_pair(r,c));
    }

    set<ll> st;
    st.insert(x);

    for (auto& ti : tr) {
        ll r=ti.first;
        char c=ti.second;
        set<ll>npp;

        for (ll plr : st) {
            ll np;
            if (c=='0') {
                np=(plr+r)%n;
                if (np==0) {
                    np=n;
                }
            } else if (c=='1') {
                np=(plr-r+n)%n;
                if (np==0) {
                    np=n;
                }
            } else {
                ll cwise=(plr+r)%n;
                if (cwise==0) {
                    cwise=n;
                }

                ll ccwise=(plr-r+n)%n;
                if (ccwise==0) {
                    ccwise=n;
                }

                npp.insert(cwise);
                npp.insert(ccwise);
                continue;
            }

            npp.insert(np);
        }
        st=npp;
    }
    // cout<<"Answer:"<<endl;
    ll ans=st.size();
    cout<<ans<<endl;

    for (ll plr : st) {
        cout<<plr<<" ";
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