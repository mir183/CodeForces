#include <bits/stdc++.h>
using namespace std;

#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fasterio;
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Iterate through the string and check for adjacent characters with different values
        stack<char> st;

        for (int i = 0; i < n; i++) {
            if (!st.empty() && st.top() != s[i]) {
                st.pop(); // Remove the pair
            } else {
                st.push(s[i]); // Add to the stack if characters are the same or the stack is empty
            }
        }

        // Output the minimum length after removing pairs
        cout << st.size() << endl;

        // Clear the stack for the next test case
        while (!st.empty()) {
            st.pop();
        }
    }

    return 0;
}
