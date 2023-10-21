#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] == maxv) {
            maxmove = i;
            break;
        }
    }
        

    int maxv = *max_element(arr.begin(), arr.end());
    int minv = *min_element(arr.begin(), arr.end());

    int maxmove = 0;
    int minmove = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == maxv) {
            maxmove = i;
            break;
        }
    }

    for (int j = n - 1; j >= 0; j--) {
        if (arr[j] == minv) {
            minmove = n - 1 - j;
            break;
        }
    }
    cout << maxmove + minmove - (maxmove > minmove ? 1 : 0) << endl;
}
