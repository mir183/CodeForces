#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl



void solve() {
    // Your code here
    ll x;
    cin>>x;
    ll n=log2(x)+1;

    ll sum=0;
    deque<ll>d(n);
    deque<ll>a;
    for(ll i=0;i<n;i++){
        d[i]=pow(2,i);
    }
    reverse(d.begin(),d.end());
    for(ll i=0;i<n;i++){
            ll tsum=sum;// ekhane tmp sum use na koray pura 2h waste, bhaire bhai
            if((tsum+=d[i])<=x){
                sum+=d[i];
                a.push_back(1);
            }else{
                a.push_back(0);
            }
        }
    


    reverse(a.begin(),a.end());

    // while (a.size()!=31)
    // {
    //     a.push_back(0);
    // }
    a.push_back(0);
    for(ll i=0;i<a.size()-1;i++){
        if(a[i]){
            a[i+1]=1;
            a[i]=0;
        }else if(i>0){
            if(a[i-1]){
                a[i+1]=1;
                a[i-1]=-1;
            }else{
                a[i]=1;
            }
        }else if(i==0){
            a[i]==1;
        }
    }

    
    while (a.size()!=31)
    {
        a.push_back(0);
    }

    cout<<31<<endl;


    for(auto i:a){
        cout<<i<<" ";
    }

}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}