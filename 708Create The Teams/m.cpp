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
    ll n,x;
    cin>>n>>x;
    deque<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());


    deque<ll>ans(n+1);

    for(ll i=n-1;i>=0;i--){
        ll required;
        if(x%v[i]==0) required=x/v[i];
        else required=(x/v[i])+1;
        if(i+required>n)continue;;
        ans[i]=1+ans[i+required];

    }
    cout<<*max_element(ans.begin(),ans.end())<<endl;

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