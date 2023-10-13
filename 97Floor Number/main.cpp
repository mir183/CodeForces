#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fasterio;
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int floor=1;
        n=n-2;
        while (n>0)
        {
            n-=x;
            floor++;

        }
        cout<<floor<<endl;
    }
    
    return 0;
}