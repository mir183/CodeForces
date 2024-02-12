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
        string x,y;
        cin>>x>>y;
        ll s1=x.size();
        ll s2=y.size();
        ll lccm=(s1*s2)/__gcd(s1,s2);
        string s3,s4;
        for(ll i=0;i<lccm/s1;i++){
            s3+=x;
        }
        for(ll i=0;i<lccm/s2;i++){
            s4+=y;
        }
        if(s3==s4){
            cout<<s3<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
    
    return 0;
}