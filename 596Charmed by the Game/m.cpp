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
    ll a,b;
    cin>>a>>b;
    ll c=min(a,b),d=abs(a-b);
    if(d%2){
        cout<<2+2*c<<endl;
        for(ll i=d/2;i<=d/2+1+2*c;i++){
            cout<<i<<" ";
        }
    }else{
        cout<<1+c<<endl;
        for(ll i=d/2;i<=d/2+2*c;i+=2){
            cout<<i<<" ";
        }
    }
    cout<<endl;
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