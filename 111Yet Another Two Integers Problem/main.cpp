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
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }else{
            int ab=abs(a-b);
            int ans=ab/10;
            if(ab%10==0){
                cout<<ans<<endl;
            }
            else{
                cout<<ans+1<<endl;
            }
        }
    }
    
    return 0;
}