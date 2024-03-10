#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

    ll arr[10][10]={
            {1,1,1,1,1,1,1,1,1,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,1,1,1,1,1,1,1,1,1}
        };

int main() {
    fasterio;
    // Your code here
    // Always use ll, int may give TLE
    ll t;
    cin>>t;
    while(t--) {

        ll ans=0;
        for(ll i=0;i<10;i++){
            for(ll j=0;j<10;j++){
                char x;
                cin>>x;
                if(x=='X'){
                    ans+=arr[i][j];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}