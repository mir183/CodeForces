#include <iostream>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
	// Your code here
	ll x,y,k;
	cin>>x>>y>>k;
	if(k%2){
		cout<<x<<" "<<y<<endl;
	}
	for(ll i=1;i<=k/2;i++){
		cout<<x+i<<" "<<y+i<<endl;
	}
	for(ll i=1;i<=k/2;i++){
		cout<<x-i<<" "<<y-i<<endl;
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