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
    // Always use ll(long long int), int may give TLE
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // ll product=1;
        // for (ll i = 0; i < n; i++)
        // {
        //     product*=v[i];
        // }


        // if(product<=0){
        //     cout<<0<<endl;
        // }else{
            // ll ans=0;
            ll pos=0;
            ll neg=0;
            ll zero=0;
            for(ll i=0;i<n;i++){
                if(v[i]<0){
                    neg++;
                }
                else if(v[i]>0){
                    pos++;
                }
                else{
                    zero++;
                }
            }


            // if(neg==0){
            //     cout<<1<<endl;
            //     cout<< pos<<" "<< 0<<endl;
            // }
            // else{
            //     cout<<1<<endl;
            //     cout<< neg-1<<" "<< 0<<endl;
            // }



            if(neg%2==1||zero>0){
                cout<<0<<endl;
            }else{
                cout<<1<<endl;
                cout<<1<<" "<<0<<endl;
            }

        // }
    }
    
    return 0;
}