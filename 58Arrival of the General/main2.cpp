#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

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
            minmove = j;
            break;
        }
    }
    if(maxmove>minmove) minmove++;
    cout << maxmove -1+n- minmove << endl;
    return 0;
}
