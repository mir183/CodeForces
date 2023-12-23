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
        for(ll i=2;i;i=i*2){
            set<ll> s;
            for(ll j=0;j<n;j++){
                s.insert(v[j]%i);
                if(s.size()==3){
                    break;
                }
            }
        if(s.size()==2){
            cout<<i<<endl;
            break;
        }
        }
    }
    
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// using namespace chrono;

// #define ll long long int
// #define ld long double
// #define endl '\n'
// #define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define yes cout << "YES" << endl
// #define no cout << "NO" << endl

// int main() {
//     fasterio;
//     int t;
//     cin >> t;
//     while (t--) {
//         ll n;
//         cin >> n;
//         vector<ll> v(n);
//         for (ll i = 0; i < n; i++) {
//             cin >> v[i];
//         }

//         // Start the clock
//         //auto start_time = high_resolution_clock::now();
//         ll i=1000000;
//         while(i--){
//             set<ll> s;
//             for (ll j = 0; j < n; j++) {
//                 s.insert(v[j]%i);
//                 if(s.size()==3){
//                     break;
//                 }
//             }
//             if(s.size()==2){
//                 cout<<i<<endl;
//                 break;
//             }
//         }

//         // // Stop the clock
//         // auto stop_time = high_resolution_clock::now();
//         // auto duration = duration_cast<milliseconds>(stop_time - start_time);

//         // cout << "Time taken: " << duration.count() << " milliseconds" << endl;
//     }

//     return 0;
// }