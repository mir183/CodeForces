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
    ll n,m;
    cin>>n>>m;
    n=n/m;
    deque<ll>v(10);
    for(ll i=0;i<10;i++){
        v[i]=((i+1)*m)%10;

    }
    ll sum=0;
    for(ll i=0;i<n%10;i++){
        sum+=v[i];
    }
    cout<<sum+n/10*accumulate(v.begin(),v.end(),0LL)<<endl;
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