#include <iostream>
#include<deque>
#include<utility>
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
    // deque<pair<ll,ll>>pr;
    deque<ll>v(n+1,0);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    // for(ll i=1;i<=n;i++){
    //     ll x=i;
    //     ll y=v[i];
    //     pr.push_back({x,y});
    // // }
    // for(ll i=1;i<=n;i++){
    //     // ll move=1;
    //     ll x,y;
    //     x=pr[i].first;
    //     y=pr[i].second;
    //     if(x==y){
    //         cout<<1<<" ";
    //     }else{  
    //         ll move=1;
    //         while (y!=x)
    //         {
    //             move++;
    //             pr[i].first=y;
    //         }
    //         cout<<move<<" ";
    //     }
    // }
    // cout<<"ANS: ";
    ll q=n;
    // for(ll j=0;j<q;j++){
        for(ll i=1;i<=n;i++){
            if(i==v[i]){
                cout<<1<<" ";
            }
            else{
                ll move=1;
                ll x=i;
                ll y=v[i];
                while (y!=i){
                    y=v[y];
                    move++;
                }
                cout<<move<<" ";
                
            }
        }
    // }


    cout<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}