#include <iostream>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,m,k;
    cin>>n>>m>>k;
    ll mxedge=(n*(n-1))/2;
    if(k<2){
        no;
        return;
    }
    if(k==2){
        if(n==1 and m==0) yes;
        else no;
        return;
    }
    if(k==3){
        if(mxedge==m) yes;
        else no;
        return;
    }
    if(k>3){
        if(m>=n-1 and m<=mxedge) yes;
        else no;
        return;
    }
    // no;
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