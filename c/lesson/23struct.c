#include <stdio.h>

// 结构 struct，是一个复合的类型，里面可以包含多个不同的成员
struct position {
    int x;
    int y;
};

int main() {
    struct position p1 = {0, 0};
    struct position p2 = {.x = 0, .y = 0};
    struct position p3;
    struct position *p3p = &p3;
    // (*p3p).x = 10;
    // (*p3p).y = 20;
    p3p->x = 10;
    p3p->y = 20;
    printf("p3:x=%d, y=%d\n", p3.x, p3.y);

    return 0;
}

