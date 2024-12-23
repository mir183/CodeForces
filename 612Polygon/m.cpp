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
    deque<deque<char>>v(n,deque<char>(n));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            char c;cin>>c;
            v[i][j]=c;
        }
        
    }
    bool ok=true;
    for(ll i=n-2;i>=0;i--){
        for(ll j=n-2;j>=0;j--){
            if(v[i][j]=='1'){
                if(v[i+1][j]!='1' and v[i][j+1]!='1'){
                    ok=false;
                    break;
                }
                // else{
                //     ok=false;
                //     break;
                // }
                
            }
        }
    }
    if(ok)yes;
    else no;
    
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