#include <stdio.h>
#include <stdlib.h>

int main(void) {
    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            if (r == 0 || r == 8 || c == 0 || c == 8)
                putchar('*');
            else
                putchar(' ');
        }
        printf("   ");

        for (int c = 0; c < 9; c++) {
            if (((r == 0 || r == 8) && (c >= 3 && c <= 5)) ||
                ((r == 1 || r == 7) && (c == 1 || c == 7)) ||
                ((r >= 2 && r <= 6) && (c == 0 || c == 8)))
                putchar('*');
            else
                putchar(' ');
        }
        printf("   ");

        for (int c = 0; c < 5; c++) {
            if ((r == 0 && c == 2) ||
                (r == 1 && c >= 1 && c <= 3) ||
                (r == 2) ||
                (r >= 3 && c == 2))
                putchar('*');
            else
                putchar(' ');
        }
        printf("   ");

        for (int c = 0; c < 9; c++) {
            if (abs(r - 4) + abs(c - 4) == 4)
                putchar('*');
            else
                putchar(' ');
        }

        putchar('\n');
    }

    return 0;
}