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
    ll n,k;
    cin>>n>>k;
    deque<ll>a(n+1),b(n+1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        a[i]%=k;
        if(a[i]!=0)a[i]=k-a[i];
    }
        

    sort(a.begin()+1,a.end());
    ll ans=a[1];
    b[1]=a[1];
    for(ll i=2;i<=n;i++){
        if(!a[i])continue;
        if(a[i]==a[i-1])b[i]=b[i-1]+k;
        else b[i]=a[i];

        ans=max(ans,b[i]);

    }
    if(ans)cout<<ans+1<<endl;
    else cout<<ans<<endl;

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