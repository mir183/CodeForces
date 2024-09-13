#include <iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<deque>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    string s;
    cin>>s;
    int n=s.length();
    deque<ll>pre(3,-1);
    ll ans=LLONG_MAX;
    for(ll i=0;i<n;i++){
        pre[s[i]-'1']=i;
        ll x=*min_element(pre.begin(),pre.end());
        if(x!=-1){
            ans=min(ans,i-x+1);
        }
    }
    if(ans==LLONG_MAX) cout<<0<<endl;
    else cout<<ans<<endl;
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