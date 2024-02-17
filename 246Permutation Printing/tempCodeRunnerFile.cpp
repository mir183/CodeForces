#include <vector>
#include <iostream>

using namespace std;

vector<int> find_permutation(int n) {
    vector<bool> used(n + 1, false);
    vector<int> permutation;
    int i = 1;
    while (permutation.size() < n) {
        permutation.push_back(i);
        used[i] = true;
        if (i * 2 <= n) {
            i *= 2;
        } else {
            i = 1;
            while (used[i]) {
                i++;
            }
        }
    }
    return permutation;
}

int main() {
    int n = 10;
    vector<int> permutation = find_permutation(n);
    for (int i : permutation) {
        cout << i << " ";
    }
    return 0;
}