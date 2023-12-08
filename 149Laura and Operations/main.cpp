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
        int a,b,c;
        cin >> a >> b >> c;
        int one,two,three;
        if(abs(b-c)%2==0){
            one=1;
        }
        else{
            one=0;
        }
        if(abs(a-c)%2==0){
            two=1;
        }
        else{
            two=0;

        }
        if(abs(a-b)%2==0){
            three=1;
        }
        else{
            three=0;
        }
        cout << one << " " << two << " " << three << endl;
    }
    
    return 0;
}