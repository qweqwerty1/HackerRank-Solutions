#include <stdio.h>

void update(int *, int *);

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa , pb);
    printf("%d\n%d", a, b);

    return 0;
}

void update(int *a, int *b) {
    int x = *a + *b;
    int y;
    if (*a > *b) {
        y = *a - *b;
    } else {
        y = *b - *a;
    }

    *a = x;
    *b = y;
}