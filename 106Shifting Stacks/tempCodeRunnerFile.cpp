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
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        int flag=0;
        cin>>n;
        int arr[n];
        int sum=0,need=0;
        for(int i=1;i<=n;i++)cin>>arr[i];
        for(int i=0;i<n;i++){
            if(arr[i]>i){
                flag=1;
            }
            else flag=0; break;
        }
        if(flag==0)no;
        else yes;
        
    }
    
    return 0;
}