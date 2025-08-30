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
	string s;
	cin>>s;
	string rgb="RGB";
	ll mn=k;
	for(ll i=0;i<3;i++){
		deque<ll>mismatch(n,0);
		for(ll j=0;j<n;j++){
			if(s[j]!=rgb[(i + j) % 3]){
				mismatch[j]=1;
			}
		}
		ll cur=0;
		for(ll j=0;j<k;j++){
			cur+=mismatch[j];
		}
		mn=min(mn,cur);
		for(ll j=k;j<n;j++){
			cur+=mismatch[j]-mismatch[j-k];
			mn=min(mn,cur);
		}
	}

	cout<<mn<<endl;
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