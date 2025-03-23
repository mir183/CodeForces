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
    if (n > m + 1 || n * 2 + 2 < m){
        cout<<-1<<endl;
        return;
    }
    string s="";
    while(m>n and n>0){
        s+="110";
        m-=2;
        n-=1;
    }
    if(n>m){
        s+="0";
        n--;
    }
    while(n>0 and m>0){
        s+="10";
        m--,n--;
    }
    while(m<=2 and m>0){
        s+="1";
        m--;
    }
    cout<<s<<endl;
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