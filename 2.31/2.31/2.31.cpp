#include <math.h>
#include <stdio.h>

int main() {
    printf("%-10s  %-10s  %-10s\n", "number", "square", "cube");
    for (int i = 0; i <= 10; i++) {
        printf("%-10d  %-10d  %-10d\n", i, (int)pow(i, 2), (int)pow(i, 3));
        // printf("%d ", i);
        // printf("%d\n", (int)pow(i, 2));
        // printf("%d\n", (int)pow(i, 3));
    }
    return 0;
}
