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
    ll k,x;
    cin>>k>>x;
    ll ans=1;
    ll L=1,R=2*k-1;
    while(L<=R){
        ll mid=(L+R)/2;
        ll sum;
        if(mid<=k){
            sum=(mid*(mid+1))/2;

        }else{
            ll num=mid-k;
            ll tmp=k-num-1;
            sum=((k*(k-1))/2 -(tmp*(tmp+1))/2)+k*(k+1)/2;

        }
        if(sum==x){
            ans=mid;
            break;
        }else if(sum>x){
            R=mid-1;
        }else{
            ans=mid+1;
            L=mid+1;
        }
        
    }
        ans=min(ans,2*k-1);
        cout<<ans<<endl;
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