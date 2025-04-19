//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<map>
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
    map<ll,ll>cnt;
    ll c[10]={0};

    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        cnt[x]++;
        if (cnt[x]==2 or cnt[x]==4 or cnt[x]==6 or cnt[x]==8){
            c[cnt[x]]++;
        }
    }
    ll q;
    cin>>q;
    while(q--){
        char ch;
        ll x;
        cin>>ch>>x;
        if(ch=='+'){
			cnt[x]++;
			if(cnt[x]==2 or cnt[x]==4 or cnt[x]==6 or cnt[x]==8) c[cnt[x]]++;
		}else{
			if(cnt[x]==2 or cnt[x]==4 or cnt[x]==6 or cnt[x]==8) c[cnt[x]]--;
			cnt[x]--;
		}
        if(c[8] or c[4]>=2 or (c[6] and c[2]>=2) or (c[4] and c[2]>=3))yes;
		else no;
    }

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}