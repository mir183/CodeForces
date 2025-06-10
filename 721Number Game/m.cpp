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
    bool ans=true;
    ll k=n;
    while(k%2==0)k=k/2;
    if(k==1)ans=false;
    bool is_prime=true;
    for(ll i=2;i*i<=k;i++){
        if(k%i==0){
            is_prime=false;
            break;
        }
    }
    if(n%2==0 and n%4!=0 and is_prime)ans=false;
    if(n==2)ans=true;
    if(ans)cout<<"Ashishgup"<<endl;
    else cout<<"FastestFinger"<<endl;

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