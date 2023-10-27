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
    int flag=0;
    int t;
    cin>>t;
    while (t--)
    {
        bool xyz=true;
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        for( ll i=n-1;i>0;i--){
            if(arr[i]-arr[i+1]>1){
                xyz=false;
                break;
            }
        }
        if(xyz)yes;
        else no;
    }
    
    return 0;
}