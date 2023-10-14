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
    int n;
    cin>>n;
    cout<<n/2<<endl;
    if(n%2==0){
        for(int i=0;i<n/2;i++){
            cout<<"2 ";

        }
    }
    else if(n%2!=0){
        n=n-3;
        for(int i=0;i<n/2;i++){
            cout<<"2 ";
    }
    cout<<3;
    }
    
    return 0;
}