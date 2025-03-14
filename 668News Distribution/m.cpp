// #include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<numeric>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;
// #define MX 5e10+5;
deque<ll>L(1000111),R(1000111);

ll get(ll x){
    if(L[x]==x){
        return x;
    }else{
        return L[x]=get(L[x]);
    }
}

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    iota(L.begin(),L.begin()+m+n,0);
    for(ll i=0;i<m;i++){
        ll x;
        cin>>x;
        while(x--){
            ll y;
            cin>>y;
            L[get(y-1)]=get(n+i);
        }
    }
    for(ll i=0;i<n;i++){
        ++R[get(i)];
    }
    for(ll i=0;i<n;i++){
        cout<<R[get(i)]<<" ";
    }cout<<endl;

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