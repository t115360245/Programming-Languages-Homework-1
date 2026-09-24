#include <stdio.h>

int main(void) {
    for (int r = 0; r < 17; r++) {

        if (r >= 0 && r <= 4) {
            int c_row = r;
            for (int c = 0; c < 9; c++) {
                if ((c_row == 0 && c >= 2 && c <= 8) ||
                    (c_row == 1 && (c == 1 || c == 8)) ||
                    (c_row == 2 && c == 0) ||
                    (c_row == 3 && (c == 1 || c == 8)) ||
                    (c_row == 4 && c >= 2 && c <= 8)) {
                    putchar('C');
                }
                else {
                    putchar(' ');
                }
            }
        }

        else if (r >= 6 && r <= 10) {
            int w_row = r - 6;
            for (int c = 0; c < 9; c++) {
                if ((w_row >= 0 && w_row <= 2 && (c == 0 || c == 8)) ||
                    (w_row == 3 && (c == 0 || c == 4 || c == 8)) ||
                    (w_row == 4 && (c == 1 || c == 2 || c == 3 || c == 5 || c == 6 || c == 7))) {
                    putchar('W');
                }
                else {
                    putchar(' ');
                }
            }
        }

        else if (r >= 12 && r <= 16) {
            int c_row = r - 12;
            for (int c = 0; c < 9; c++) {
                if ((c_row == 0 && c >= 2 && c <= 8) ||
                    (c_row == 1 && (c == 1 || c == 8)) ||
                    (c_row == 2 && c == 0) ||
                    (c_row == 3 && (c == 1 || c == 8)) ||
                    (c_row == 4 && c >= 2 && c <= 8)) {
                    putchar('C');
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