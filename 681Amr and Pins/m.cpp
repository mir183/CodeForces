//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;



ld getDistance(ld x1, ld y1, ld x2, ld y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


void solve() {
    // Your code here
    ld r;
    ld x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;
    ld ans=getDistance(x1,y1,x2,y2);
    ll f=ceil(ans/(2.0*r));
    cout<<f<<endl;
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