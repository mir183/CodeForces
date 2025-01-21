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
const ll mod = 1e6 + 7;
deque<ll>prime;
deque<ll>primeSQ;

void seive(){
    deque<bool>isPrime(mod,true);
    isPrime[0]=isPrime[1]=false;
    for(ll i=2;i<mod;i++){
        if(isPrime[i]){
            prime.push_back(i);
            for(ll j=i+i;j<mod;j+=i){
                isPrime[j]=false;
            }
        }
    }
    for(ll i=0;i<prime.size();i++){
        primeSQ.push_back(prime[i]*prime[i]);
    }
}

bool ok(ll n){
    return binary_search(primeSQ.begin(),primeSQ.end(),n);
}



void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<n;i++) {
        if(ok(v[i])) {
            yes;
        }else {
            no;
        }
    }
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    seive();
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}