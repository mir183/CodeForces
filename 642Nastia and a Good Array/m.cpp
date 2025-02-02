#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<numeric>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    
    // ll mn=*min_element(v.begin(),v.end());
    // ll mnIdx=find(v.begin(),v.end(),mn)-v.begin();
    // cout<<n-1<<endl;
    // for(ll i=0;i<n;i++){
    //     if(i!=mnIdx){
    //         cout<<i+1<<" "<<mnIdx+1<<" "<<mn+abs(i-mnIdx)<<" "<<mn<<endl;
    //     }
    // }
    // Above Sol^n given by author
    // Bottom one is collected
    cout<<n-1<<endl;
    for(ll i=0;i<n-1;i++){
        cout<<i+1<<" "<<n<<" ";
        if(i%2==0){
            cout<<1000000007<<" ";
        }else{
            cout<<1000000009<<" ";
        }
        ll mn=min(v[i],v.back());
        v.back()=mn;
        cout<<v.back()<<endl;
    }

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