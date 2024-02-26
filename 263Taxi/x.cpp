#include <iostream>
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
    ll n;
    cin>>n;
    ll a=0,b=0,c=0,d=0;
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x==1)a++;
        if(x==2)b++;
        if(x==3)c++;
        if(x==4)d++;
    }
        ans+=d;
        if(c<a){
            ans+=c;
            a-=c;
            c=0;
        }
        else if(a<=c){
            ans+=a;
            c-=a;
            a=0;
        }
        if(c>0){
            ans+=c;
            c=0;
        }

        if(b>0){
            ans+=b/2;
            b=b%2;
        }
        int left=a+(b*2);
        if(left<=4 and left>0){
            ans+=1;
        }
        else if(left%4!=0){
            ans+=(left/4)+1;            
        }else{
            ans+=left/4;
        }



    cout<<ans<<endl;
    return 0;
}