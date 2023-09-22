#include <stdio.h>

int main() {
    int s1, s2, s3, s4;
    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);

    int colors[4] = {s1, s2, s3, s4};
    int unique_colors = 0;

    for (int i = 0; i < 4; i++) {
        int is_unique = 1;
        for (int j = 0; j < i; j++) {
            if (colors[i] == colors[j]) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) {
            unique_colors++;
        }
    }

    int additional_horseshoes_needed = 4 - unique_colors;
    printf("%d", additional_horseshoes_needed);

    return 0;
}
