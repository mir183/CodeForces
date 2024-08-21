#include <iostream>
#include<deque>
#include<map>
#include<algorithm>
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
    n*=4;
    deque<ll>v(n);
    // map<ll,ll>m;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v[i]=x;
        // m[x]++;
    }
    // if(m.size()==1){
    //     yes;
    //     return;
    // }
    sort(v.begin(),v.end());
    ll p=v[0]*v.back();
    for(ll i=0;i<n;i+=2){
        if(v[i]!=v[i+1]){
            no;
            return;
        }
    }
    ll i=0,j=n-1;
    while (i<j)
    {
        ll tmp=v[i]*v[j];
        if(tmp!=p){
            no;
            return;
        }
        i++;
        j--;
    }
    yes;

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