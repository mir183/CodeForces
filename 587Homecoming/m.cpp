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
    ll a,b,p;
    ll i;
    string s;
    cin>>a>>b>>p>>s;
    ll n=s.size();
    char c;
    for( i=n-2;i>=0;i--){
        if(c!=s[i]){
            c=s[i];
            if(c=='A'){
                p-=a;
            }else p-=b;
        }
        if(p<0)break;
    }
    cout<<i+2<<endl;
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