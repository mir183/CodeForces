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
    int m;
    cin >> m;
    vector<int> arr(30);
    for(int j=0;j<m;j++)
    {
        int t,v;
        cin >> t >> v;
        if(t==1){
            arr[v]++;
        }else{
            int i=29;
            while (i>=0)
            {
                if(arr[i]){
                    int k=v/pow(2,i);
                    int p=min(k,arr[i]);
                    v-=p*pow(2,i);
                    // arr[i]-=p;
                }
                i--;
            }
            if(v==0){
                yes;
            }else{
                no;
            }
            
        }
    }
    return 0;
}