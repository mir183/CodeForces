#include <iostream>
#include<deque>
#include<numeric>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n, m;
    cin>>n>>m;
    ll s=0;
    deque<ll>l,r;
    ll on=n;
    while (n--)
    {
        ll x,y;
        cin>>x>>y;
        l.push_back(x);
        r.push_back(y);
    }
    ll minsum=accumulate(l.begin(),l.end(),0LL);
    ll maxsum=accumulate(r.begin(),r.end(),0LL);
    if(minsum>m || maxsum<m){
        no;
        return;
    }
    yes;
    for(ll i=0;i<on;i++){
        ll w=min(r[i],m-minsum+l[i]);
        cout<<w<<" ";
        m-=w;
        minsum-=l[i];

    }
    cout<<endl;
    
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}