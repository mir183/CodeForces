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
    ll a,b,c;
    cin>>a>>b>>c;
    vector<ll>tf;
    ll ans1=(a+b)*c;
    tf.push_back(ans1);
    // ll ans2=(a+c)*b;
    // tf.push_back(ans2);
    ll ans3=(b+c)*a;
    tf.push_back(ans3);
    ll ans4=b*c*a;
    tf.push_back(ans4);
    ll ans5=a+b+c;
    tf.push_back(ans5);
    ll mx=*max_element(tf.begin(),tf.end());
    cout<<mx<<endl;
    return 0;
}