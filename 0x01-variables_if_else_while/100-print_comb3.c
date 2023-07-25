#include <stdio.h>

int main() {
    int lbhja;
    int ghousni;

    for (ghousni = 0; ghousni <= 9; ghousni++) {
        for (lbhja = 0; lbhja <= 9; lbhja++) {
            if (ghousni < lbhja) {
                putchar(ghousni + '0');
                putchar(lbhja + '0');

                if (ghousni != 8 || lbhja != 9) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return 0;
}
