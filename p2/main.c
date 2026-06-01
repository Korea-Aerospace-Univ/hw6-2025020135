#include <stdio.h>

int main(void) {
    int N;
    int a[20], b[20];

    scanf("%d", &N);

    for (int *p = a; p < a + N; p++) {
        scanf("%d", p);
    }

    for (int *q = b; q < b + N; q++) {
        scanf("%d", q);
    }

    int *p = a;
    int *q = b + N - 1;

    while (p < a + N) {
        printf(" %d", *p + *q);
        p++;
        q--;
    }

    return 0;
}
