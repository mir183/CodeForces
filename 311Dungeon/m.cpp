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
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%9!=0)
            no;
        else
            if(min(a,min(b,c))>=(a+b+c)/9)
                yes;
            else
                no;
    }
    
    return 0;
}