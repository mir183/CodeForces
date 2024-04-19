#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    ll n;
    cin>>n;
    deque<ll>d(n);
    for (ll i=0;i<n;i++)cin>>d[i];
    ll i=0,j=n-1;
    bool ans=false;
    ll a,b;
    while(i<j){
        if (d[i]!=d[j]){
            ans=true;
            a=d[i];
            b=d[j];
            break;
        }
        i++;
        j--;
    }
    if(!ans) yes;
    else{
        // deque<ll>d1,d2;
        deque<ll> d1 = d;
        deque<ll> d2 = d;
        d1.erase(remove(d1.begin(), d1.end(), a), d1.end());
        d2.erase(remove(d2.begin(), d2.end(), b), d2.end());


        bool p=true;
        
        ll m=d.size();
        ll l=0,r=m-1;
        ll i=0,j=d1.size()-1;
        while (i<j){
            if(d1[i]!=d1[j]){
                p=false;
                break;
            }
            i++;
            j--;
        }
        if(!p){
            p=true;
            i=0;
            j=d2.size()-1;
            while(i<j){
                if(d2[i]!=d2[j]){
                    p=false;
                    break;
                }
                i++;
                j--;
            }
        }
        if(p)yes;
        else no;
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