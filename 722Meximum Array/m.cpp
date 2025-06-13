//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll n;
    cin>>n;
    ll id=1;
    deque<ll>a(n+1),freq(n+1),b(n+1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        ++freq[a[i]];
    }
    deque<ll>v;
    ll now=0;

    for(ll i=1;i<=n;i++){
        b[a[i]]=id;
        --freq[a[i]];
        while(b[now]==id)now++;
        if(!freq[now]){
            v.push_back(now);
            id++;
            now=0;
        }
    }
    cout<<v.size()<<endl;
    for(auto i:v){
        cout<<i<<" ";
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