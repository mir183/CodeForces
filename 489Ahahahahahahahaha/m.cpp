#include <iostream>
#include<deque>
#include<map>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
	// Your code here
	ll n;
	cin>>n;
	deque<ll>v(n);
	map<ll,ll>m;
	for(ll i=0;i<n;i++){
		ll x;
		cin>>x;
		v[i]=x;
		m[x]++;
	}
	if(m[0]>=n/2){
		cout<<n/2<<endl;
		for(ll i=0;i<n/2;i++){
			cout<<0<<" ";
		}
		cout<<endl;
	}else{
		ll x=n/2;
		if(x%2!=0)x++;
		cout<<x<<endl;
		for(ll i=0;i<x;i++){
			cout<<1<<" ";
		}cout<<endl;

	}
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