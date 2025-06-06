#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<set>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    deque<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    set<ll>s;
    ll ans=0;
    ll index=0;
    for(ll i=0;i<m;i++){
        ll b;cin>>b;
        if(s.find(b) != s.end()){
            ans++;
            s.erase(b);
        }else{
            while(index<n and v[index]!=b){
                s.insert(v[index]);
                index++;
            }
            index++;
            ans+=2*s.size()+1;
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