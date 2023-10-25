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
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)cin>>arr[i];
    // int carr[n];
    // for(int i=0;i<n;i++){
    //     carr[i]=arr[i];
    // }
    sort(arr,arr+m);
    int mini=arr[n-1]-arr[0];
    int ans=0;
    for(int i=n;i<=m;i++){
        ans=arr[i-1]-arr[i-n];
        ans=abs(ans);
        mini=min(ans,mini);
    }
    cout<<mini;
    return 0;
}