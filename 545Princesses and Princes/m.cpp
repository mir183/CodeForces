#include <iostream>
#include <deque>
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
    cin >> n;
    deque<bool>v(n+1, false);
    ll fg=0;
    for(ll i=1;i<=n;i++){
        ll k;cin>>k;
        ll gd=0;
        while (k--)
        {
            ll x;
            cin>>x;
            if(gd)continue;
            if(v[x])continue;
            gd=1;
            v[x]=true;
        }
        if(gd==0)fg=i;
    }
    if(fg==0){
        cout<<"OPTIMAL"<<endl;
    }else{
        cout<<"IMPROVE"<<endl;
        cout<<fg<<" ";
        for(ll i=1;i<=n;i++){
            if(v[i]==false){
                cout<<i<<endl;
                break;
            }
        }
    }
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