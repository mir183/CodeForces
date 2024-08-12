#include <iostream>
#include<deque>
#include<algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
	// Your code here
	ll n,k;
	cin>>n>>k;
	deque<ll>v(n);
	for(ll i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.rbegin(),v.rend());
	ll s=0;
	for(ll i=0;i<n;i++){
		if(v[i]>k){
			ll r=v[i]-k;
			v[i]=k;
			s+=r;
		}
	}
	for(ll i=0;i<n;i++){
		if(s<=0)break;
		if(v[i]<k){
			ll r=k-v[i];
			if(s<r)break;
			s-=r;
			v[i]=k;
		}
		// if(s==0)break;
	}
	ll ans=0;
	for(ll i=0;i<n;i++){
		if(v[i]==k){
			ans++;
		}
	}
	cout<<ans<<endl;
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