#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl


void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n+1),x(n+1);
    for(ll i=1;i<=n;i++) cin>>a[i];
    multiset<pair<ll,ll>>mps;
    for(int i=1;i<=n;i++){
        cin>>x[i];
        mps.insert({abs(x[i]),a[i]});
    }
    ll move=0;
    bool killall=true;
    while (!mps.empty()){
        ll cur=k;
        while (!mps.empty() and cur>0)
        {
            pair<ll,ll> p=*mps.begin();
            if(p.first-move<=0){
                killall=false;
            }
            mps.erase(mps.begin());
            if(p.second<=cur){
                cur-=p.second;
            }else{
                mps.insert({p.first,p.second-cur});
                cur=0;
                break;
            }
        }
        move++;
    }
    if(killall)yes;
    else no;
}

int main() {
    fasterio;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}