#include <iostream>
#include<deque>
#include<set>
#include<algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x%2==0)v.push_back(x);
    }
    n=v.size();
    // set in decresing order
    set<ll,greater<ll>>st(v.begin(),v.end());
    v.clear();
    ll ans=0;
    while(!st.empty()){
        ll x=*st.begin();
        st.erase(st.begin());
        if(x%2==0){
            ans++;
            x/=2;
            if(x%2==0 and x>0)st.insert(x);
        }
    }

    cout<<ans<<endl;


}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}