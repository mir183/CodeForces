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
        cin>>n;
        if((n/2)%2!=0)no;
        else{
            yes;
            for(int i=2;i<=n;i=i+2){
                cout<<i<<" ";
            }
            for(int i=1;i<n-1;i=i+2){
                cout<<i<<" ";
            }
            cout<<(n-2)+n/2+1<<endl;

        }
    }
    
    return 0;
}