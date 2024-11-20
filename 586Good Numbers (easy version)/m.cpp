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

bool ok(int n){
    while (n>0){
        if(n%3==2){
            return false;
        }
        n/=3;
    }
    return true;
    
}

void solve() {
    // Your code here
    ll n;
    cin>>n;
    while(!ok(n)){
        n++;
    }
    cout<<n<<endl;

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