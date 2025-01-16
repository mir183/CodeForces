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
    if(n%2==0){ //even
        ll f=n/2;
        cout<<f<<" "<<f<<endl;
        return;
    }else{ //
        for(ll i=2;i*i<=n;i++){
            if(n%i==0){
                ll f=n/i;
                cout<<f<<" "<<n-f<<endl;
                return;
            }
        }
    }
    //if nothitng is found, or n is prime
    cout<<1<<" "<<n-1<<endl;
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