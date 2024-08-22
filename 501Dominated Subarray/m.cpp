#include <iostream>
#include<deque>
#include<map>
#include<climits>
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
    map<ll,ll>m;
    ll F=LLONG_MAX;
    for(ll i=1;i<=n;i++){
        ll x;
        cin>>x;
        if(m[x]==0){
            m[x]=i;
        }else{
            ll ans=i-m[x];
            m[x]=i;
            F=min(F,ans);
        }
    }
    if(F==LLONG_MAX){
        cout<<-1<<endl;
    }else{
        cout<<++F<<endl;
    }
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}