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
    int arr[t];
    for (int i=0;i<t;i++) {
        cin>>arr[i];
    }

    set<int> unq(arr, arr + t);
    vector<int> sorted_elements(unq.begin(), unq.end());
    sort(sorted_elements.begin(), sorted_elements.end());

    cout << sorted_elements.size() << endl;
    for (auto i : sorted_elements) {
        cout << i << " ";
    }
    return 0;
}