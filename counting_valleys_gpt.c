#include <stdio.h>

int countingValleys(int steps, char path[]) {
    int altitude = 0;
    int valleys = 0;

    for (int i = 0; i < steps; i++) {
        if (path[i] == 'U') {
            altitude++;
        } else if (path[i] == 'D') {
            altitude--;
            if (altitude == -1) {
                valleys++;
            }
        }
    }

    return valleys;
}

int main() {
    int steps;
    scanf("%d", &steps);

    char path[steps + 1];
    scanf("%s", path);

    int result = countingValleys(steps, path);
    printf("%d\n", result);

    return 0;
}

