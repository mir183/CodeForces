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
    ll x;
    cin>>x;
    ll ans=0;
    while(x!=0){
        if(x%2==1){
            ans++;
        }
                    x=x/2;
    }
    cout<<ans<<endl;
    return 0;
}