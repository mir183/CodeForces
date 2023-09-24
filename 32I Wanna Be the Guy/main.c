#include <stdio.h>

int main() {
    int n, p, q;
    scanf("%d", &n);

    // Initialize two arrays to store which levels Little X and Little Y can pass.
    int levelsX[101] = {0};
    int levelsY[101] = {0};

    // Read the levels Little X can pass.
    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
        int level;
        scanf("%d", &level);
        levelsX[level] = 1;
    }

    // Read the levels Little Y can pass.
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        int level;
        scanf("%d", &level);
        levelsY[level] = 1;
    }

    // Check if both Little X and Little Y can pass all levels.
    int canPassAllLevels = 1;
    for (int i = 1; i <= n; i++) {
        if (!levelsX[i] && !levelsY[i]) {
            canPassAllLevels = 0;
            break;
        }
    }

    // Print the result.
    if (canPassAllLevels) {
        printf("I become the guy.\n");
    } else {
        printf("Oh, my keyboard!\n");
    }

    return 0;
}
