#include <iostream>
#include<deque>
#include<algorithm>
// #include<vector>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    deque<bool>swp(n);
    deque<ll>mx(n);
    deque<ll>mn(n);
    deque<ll>a(n);
    deque<ll>b(m);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++){
        if(i==0) mx[i]=a[i];
        else mx[i]=max(mx[i-1],a[i]);
    }
    for(ll i=n-1;i>=0;i--){
        if(i==n-1) mn[i]=a[i];
        else mn[i]=min(mn[i+1],a[i]);
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
        swp[b[i]-1]=true;
    }
    bool flag=true;
    for(ll i=0;i<n;i++){
        if(!swp[i] and mx[i]>mn[i+1] and i+1<n){
            flag=false;
            break;
        }
    }
    if(flag) yes;
    else no;
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