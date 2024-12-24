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

ll fact(int n){
    if(n<=1)return n;
    else return n*fact(n-1);
}

void solve() {
    // Your code here
    ll n;
    cin>>n;
    if(n==2){
        cout<<1<<endl;
        return;
    }
    ll ans=(fact(n)/(fact(n/2)*fact(n-n/2)))/2*fact(n/2-1)*fact(n/2-1);
    cout<<ans<<endl;
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