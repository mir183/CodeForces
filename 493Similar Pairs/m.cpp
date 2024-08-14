#include <iostream>
#include<deque>
#include<algorithm>
#include<set>

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
	ll odd=0;
	ll even=0;
	for(ll i=0;i<n;i++){
		ll x;
		cin>>x;
		v[i]=x;
		if(x%2==0)even++;
		else odd++;
	}
	bool ok=false;
	if(even%2==0 and odd%2==0){
		ok=true;
		// return;
	}else{
		ok=false;
	}
	sort(v.begin(),v.end());
	set<ll>st(v.begin(),v.end());
	if(st.size()==1){
		yes;
		return;
	}
	
	for(ll i=0;i<n-1;i++){
		if(abs(v[i+1]-v[i])==1){
			ok=true;
			i++;
		}
		

	}
	if(ok)yes;
	else no;




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