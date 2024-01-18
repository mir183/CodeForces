#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int n;
const int N=1e6;
int a[N+10];
long long f[N+10];

map<ll,ll> mp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]=pow(a[i],2);
        }
        sort(a+1,a+n+1);
        ll ans=0;

        for(ll i=1;i<n;i++){
            mp[a[i]]-=i-1;
            if(a[i]==a[i-1]){
                ans+=mp[a[i]];
            }
        }

        cout<<ans<<endl;
        mp.clear();
    }
    return 0;
}