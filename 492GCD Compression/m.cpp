#include <iostream>
#include<deque>
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
	// deque<ll>v(2*n);
	deque<ll>odd;
	deque<ll>even;
	for(ll i=1;i<=2*n;i++){
		ll x;
		cin>>x;
		// v[i]=x;
		if(x%2==0)even.push_back(i);
		else odd.push_back(i);
	}
	ll cnt=0;
	for(ll i=1;i<odd.size();i+=2){
		if(cnt==n-1)break;
		cout<<odd[i-1]<<" "<<odd[i]<<endl;
		cnt++;
	}
	for(ll i=1;i<even.size();i+=2){
		if(cnt==n-1)break;
		cout<<even[i-1]<<" "<<even[i]<<endl;
		cnt++;
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