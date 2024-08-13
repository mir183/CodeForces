#include <iostream>
#include<cmath>
#include<climits>
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
	ll mn=INT_MAX;
	for(ll i=1;i*i<=n;i++){
		ll op=i-1+(n-1)/i;
		mn=min(mn,op);
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