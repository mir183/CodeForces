//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<set>
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
    ld x,y,a,b;
    set<ld>slope;
    bool vertical=false;
    cin>>x>>y;
    for(ll i=0;i<n;i++){
        cin>>a>>b;
        if(y!=b){
            slope.insert((x-a)/(y-b));  //basic slope equation
        }else{
            vertical=true;
        }
    }
    cout<<slope.size()+vertical<<endl;


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