#include <iostream>
#include<deque>
#include<map>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin>>n;
    // deque<ll>v(n);
    ll one=0,two=0;
    ll s=0;
    for ( ll i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        if(x==1) one++;
        else two++;
        s+=x;
    }
    if(s%2!=0){
        no;
        return;
    }
    two=two%2;
    if(one%2==0){
        if(two==0 or one>=2){
            yes;
        }else{
            no;
        }
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