#include <iostream>
#include<deque>
#include<set>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,q;
    cin>>n>>q;
    deque<ll>v(n);
    set<ll>st;
    deque<ll>sfx(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    // while (q--){
    //     ll k;
    //     cin>>k;
    //     set<ll>st(v.begin()+k-1,v.end());
    //     cout<<"ANS: ";
    //     cout<<st.size()<<endl;
    // }

    for(ll i=n-1;i>=0;i--){
        st.insert(v[i]);
        sfx[i]=st.size();
    }
    while (q--)
    {
        ll x;
        cin>>x;
        cout<<sfx[x-1]<<endl;
    }
    
    
}
signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}