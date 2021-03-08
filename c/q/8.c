#include <stdio.h>

int main() {
    
    int a = 100;
    int *ap = &a;
    printf("%d\n", a);
    printf("%p\n", ap);
    printf("%d\n", *ap);

    return 0;
}