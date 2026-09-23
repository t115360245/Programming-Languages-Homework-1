#include <stdio.h>

int main(void) {
    for (int r = 0; r < 17; r++) {

        if (r >= 0 && r <= 4) {
            for (int c = 0; c < 9; c++) {
                if (r == 0 ||
                    (r >= 1 && r <= 3 && (c == 3 || c == 7)) ||
                    (r == 4 && (c == 4 || c == 5))) {
                    putchar('P');
                }
                else {
                    putchar(' ');
                }
            }
        }

        else if (r >= 6 && r <= 10) {
            int j_row = r - 6; 
            for (int c = 0; c < 9; c++) {
                if ((j_row == 0 && (c == 2 || c == 3)) ||
                    (j_row == 1 && c == 1) ||
                    (j_row == 2 && c == 0) ||
                    (j_row == 3 && c == 1) ||
                    (j_row == 4 && c >= 2 && c <= 8)) {
                    putchar('J');
                }
                else {
                    putchar(' ');
                }
            }
        }

        else if (r >= 12 && r <= 16) {
            int d_row = r - 12; 
            for (int c = 0; c < 9; c++) {
                if (d_row == 0 ||
                    (d_row >= 1 && d_row <= 2 && (c == 0 || c == 8)) ||
                    (d_row == 3 && (c == 1 || c == 7)) ||
                    (d_row == 4 && (c >= 2 && c <= 6))) {
                    putchar('D');
                }
                else {
                    putchar(' ');
                }
            }
        }

        putchar('\n');
    }

    return 0;
}