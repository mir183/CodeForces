#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    ll n,m;
    cin>>n>>m;
    ll cnt=0;
    if(n==m){
        cout<<0<<endl;
        return;
    }
    else if(m%n==0){
        ll d=m/n;
        while (d%2==0)  
        {
            d=d/2;
            cnt++;
        }
        while (d%3==0)
        {
            d=d/3;
            cnt++;
        }
        if(d!=1) cnt=-1;
    }
    else {
        cnt=-1;
    }
    cout<<cnt<<endl;
}

// nah ar koto?


int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}