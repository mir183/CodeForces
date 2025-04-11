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
    ll n,k;
    cin>>n>>k;
    deque<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    deque<ll>freq(60,0);

    for(auto &a:v){
        ll pos=0;
        while(a>0){
            freq[pos]+=a%k;
            a/=k;
            pos++;
        }
    }
    for(int i=0;i<60;i++){
        if(freq[i]>1){
            no;
            return;
        }
    }
    yes;


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