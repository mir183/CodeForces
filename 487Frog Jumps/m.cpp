#include <iostream>
#include<string>
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
	string s;
	cin>>s;
	ll mx=0,cc=0;
	for(ll i=0;i<s.size();i++){
		if(s[i]=='L'){
			cc++;
		}else{
			if(cc>mx){
				mx=cc;
			}
			cc=0;
		}
	}
	if(cc>mx){
		mx=cc;
	}
	
	cout<<mx+1<<endl;
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