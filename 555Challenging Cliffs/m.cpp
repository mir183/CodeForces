#include <iostream>
#include<deque>
#include<algorithm>
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
    deque<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    if(n==2){
        cout<<v[0]<<" "<<v[1]<<endl;
        return;
    }
    ll i,j;
    ll mn=LLONG_MAX;
    for(ll k=0;k<n-1;k++){
        if(v[k+1]-v[k]<mn){
            mn=v[k+1]-v[k];
            i=k;
            j=k+1;
        }
    }
    for(ll k=j;k<n;k++){
        cout<<v[k]<<" ";
    }
    for(ll k=0;k<=i;k++){
        cout<<v[k]<<" ";
    }
    cout<<endl;
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