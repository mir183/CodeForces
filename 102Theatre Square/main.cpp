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
    ll n,m,a;
    cin>>n>>m>>a;
    ll x,y;

    if(n%a==0){
        x=n/a;
    }
    else{ 
        x=n/a;
        x++;
        }
        
    if(m%a==0){
        y=m/a;
        }
    else {
        y=m/a;
        y++;
        }

    
    ll ans=x*y;
    cout<<ans<<endl;
    return 0;
}