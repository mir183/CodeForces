#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fasterio;
    // Your code here
    // Always use ll, int may give TLE
    ll n,m;
    cin>>n>>m;
    ll ans=((n+1)/2+m-1)/m;
    if(ans*m>n)cout<<-1<<endl;
    else cout<<ans*m<<endl;
    return 0;
}