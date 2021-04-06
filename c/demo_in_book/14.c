#include <stdio.h>

int *fun(int *a, int *b) {
    return (*a > *b) ? a : b;
}
int main() {

    int p = 2, q = 4, *r;
    r = fun(&p, &q);
    printf("%d", *r);

    return 0;
}