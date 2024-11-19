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
    ll n,m;
    cin>>n>>m;
    // n=m=1e3;
    deque<deque<ll>>a(n,deque<ll>(m));
    deque<deque<ll>> b(n,deque<ll>(m,1));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
            // b[i][j]=1;
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            // cin>>a[i][j];
            if(a[i][j]==0){
                for(ll k=0;k<m;k++)b[i][k]=0;
                for(ll k=0;k<n;k++)b[k][j]=0;
            }
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            // if(a[i][j]==1){
                ll s=0;
                for(ll k=0;k<m;k++){
                    s|=b[i][k];
                }
                for(ll k=0;k<n;k++){
                    s|=b[k][j];
                }
                if(s!=a[i][j]){
                    no;
                    return;
                }
            // }
        }
    }
    yes;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }cout<<endl;

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