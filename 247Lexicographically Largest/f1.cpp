#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        set<int, greater<int>> s; // Using set to automatically keep elements sorted in decreasing order
        vector<int> b;

        for (int i = n - 1; i >= 0; --i) {
            s.insert(a[i] + i + 1); // Insert ai+i+1 into set
            auto largest = *s.begin(); // Get the largest element in the set
            b.push_back(largest); // Add it to the result array
            s.erase(largest); // Remove the element from the set
        }

        reverse(b.begin(), b.end()); // Reverse the array to get the lexicographically largest order

        for (int i : b) {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
