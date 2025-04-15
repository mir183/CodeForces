#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<map>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

map<ll,ll>m;

void solve() {
    // Your code here
    ll n;
    cin>>n;
    ll ans=0,i=0;
    while(n>0){
        if(n%2){
            ans+=m[pow(2,i)];
        }
        i++;
        n/=2;
    }
    cout<<ans<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    cin >> tt;

    m[1]=1;
    for(ll i=2;i<=1e18;i*=2){
        m[i]=m[i/2]*2+1;
    }

    
    while (tt--) {
        solve();
    }
    return 0;
}