//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<cmath>
#include<iomanip>
// #define _USE_MATH_DEFINES 
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;
// #define M_PI 3.14159265358979323846

void solve() {
    // Your code here
    ll n;
    cin>>n;
    // ld res=cos(pi/(2*n*1.0))/sin(pi/(2*n*1.0));
    ld res=1/tan(M_PI/(2*n));
    cout<<fixed<<setprecision(10)<<res<<endl;
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