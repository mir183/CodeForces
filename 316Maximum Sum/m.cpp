#include <iostream>
#include<vector>
#include<queue>
#include<numeric>
#include<algorithm>

using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,q;
    cin>>n>>q;
    deque<ll>v(n);
    for(auto &i:v)cin>>i;

    sort(v.begin(),v.end());
    while (q--)
    {
        deque<ll>frnt=v;
        frnt.pop_front();
        frnt.pop_front();
        ll frnANS=accumulate(frnt.begin(),frnt.end(),0LL);
        deque<ll>bek=v;
        bek.pop_back();
        ll bekANS=accumulate(bek.begin(),bek.end(),0LL);
        if(frnANS>bekANS){
            v=frnt;
        }else{
            v=bek;
        }



    }

            ll mainsum=accumulate(v.begin(),v.end(),0LL);

        cout<<mainsum<<endl;
    

}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        // cout<<"ANS: ";
        solve();
    }
    return 0;
}