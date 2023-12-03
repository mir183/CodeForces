#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, P, l, t;
        cin >> n >> P >> l >> t;

        // Calculate the number of points obtained from lessons
        int lesson_points = l * n;

        // Calculate the maximum number of days Monocarp can rest
        int max_rest_days = 0;

        for (int i = 0; i < n; ++i) {
            // Calculate the points obtained from the current lesson
            int current_lesson_points = i * l;

            // Calculate the points obtained from tasks if Monocarp chooses to study
            int current_task_points = min((n - i) / 7 * 2 * t, P - current_lesson_points);

            // Calculate total points if Monocarp chooses to study on the current day
            int total_points = current_lesson_points + current_task_points;

            // Update the maximum rest days if the total points are sufficient
            if (total_points >= P) {
                max_rest_days = max(max_rest_days, n - i - 1);
            }
        }

        cout << max_rest_days << endl;
    }

    return 0;
}
