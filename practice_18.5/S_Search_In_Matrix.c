#include <stdio.h>

int main() {
    int n, m, x, i, j, f = 0;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i][j] == x) {
                f = 1;
                break;
            }
        }
    }
    if (f) {
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }
    return 0;
}