#include <stdio.h>

int study(int y, int z[]) {

    int b = 0;
    b += z[y - 1];
    while (y != 1) {
        if (y % 2 == 1) {
            y--;
            b += z[y - 1];

        }
        else {
            y /= 2;
            b += z[y - 1];
        }
    }

    return b;

}

int main() {
    int n, m;
    int a[100];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d", study(m, a[100]);


    return 0;

}


