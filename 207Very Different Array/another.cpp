#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<m;i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    vector<ll> x(n),y(m);
    for(ll i=0;i<n;i++){
        if(i==0){
            x[i] = a[i];
        }else{
            x[i] = x[i-1] + a[i];
        }
    }
    for(ll i=0;i<m;i++){
        if(i==0){
            y[i] = b[i];
        }else{
            y[i] = y[i-1] + b[i];
        }
    }

    vector<ll> x1(n),y1(m);
    for(ll i=n-1;i>=0;i--){
        if(i==n-1){
            x1[i] = a[i];
        }else{
            x1[i] = x1[i+1] + a[i];
        }
    }
    for(ll i=m-1;i>=0;i--){
        if(i==m-1){
            y1[i] = b[i];
        }else{
            y1[i] = y1[i+1] + b[i];
        }
    }
    
    ll ans = -1;
    for(ll i=0;i<=n;i++){  // Change made here, loop should run for i=0 to i=n (inclusive)
        ll npa=i;
        ll nna=n-i;
        ll npb=n-i;
        ll nnb=i;
        ll sum;
        if(i==0){
            sum = abs(x1[m-npb]-y[n-1]);
        }else if(i==n){
            sum = abs(x1[0]-y[n-1]);
        }else{
            sum=x1[n-npa]+y1[m-npb]-x[nna-1]-y[nnb-1];
        }
        ans = max(ans,sum);
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
