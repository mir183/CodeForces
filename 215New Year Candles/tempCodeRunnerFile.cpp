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
    ll a,b;
    cin>>a>>b;
    ll ans=a;
    // a=a/b;
    ll c=a/b;
    ans+=c;
    while(c>b){
        c=c/b;
        ans+=c;
    }
    if(c%b==0)ans++;
    cout<<ans<<endl;
    return 0;
}