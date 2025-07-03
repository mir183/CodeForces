#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>v(n);
    ll even=0,odd=0;
    for(ll i=0;i<n;i++) {
        ll x;
        cin>>x;
        v[i]=x;
        if(i%2==0)even+=x;
        else odd+=x;
    }
    if(even<odd){
        for(ll i=0;i<n;i+=2){
            v[i]=1;
        }
    }else{
        for(ll i=1;i<n;i+=2){
            v[i]=1;
        }
    }
    for(ll i=0;i<n;i++) {
        cout<<v[i]<<" ";
    }cout<<endl;
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}