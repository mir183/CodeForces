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
    int h=0,sum=0;
    for(int i=1;n>0;i++){
        sum+=i;
        if(n-sum>=0){
            h++;
        }
                    n-=sum;

    }
    cout<<h<<endl;

    return 0;
}