#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int x = 10;
    printf("%U", x);

    // 类型说明符的组合无效C/C++(84)
    // 无符号关键字unsigned不能修饰float（单精度浮点类型）
    // unsigned float y = 10.1;

    return 0;
}
