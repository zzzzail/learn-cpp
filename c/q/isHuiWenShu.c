#include <stdio.h>
#include <math.h>


int getLength(long int num);

/**
 * 判断数字是否是回文数
 */
int isHuiWenShu(long int num);

int main() {

    long int num;
    scanf("%ld", &num);
    if (isHuiWenShu(num)) {
        printf("%ld 是回文数\n", num);
    }
    else {
        printf("%ld 不是回文数\n", num);
    }

    return 0;
}

int getLength(long int num) {
    int found = 0, length = 10;
    if (num == 0) return 1;
    
    while (found == 0) {
        // pow 函数是计算10的（length-1）次幂
        if ( num / (int) pow(10, length - 1) > 0 ) {
            found = 1;
        }
        else {
            length -= 1;
        }
    }
    
    // 返回正整数num的位数
    return length;
}

int isHuiWenShu(long int num) {
    // n 保存键盘输入的正整数
    long int n;
    // left 保存正整数最左边的数字
    // right 保存正整数最右边的数字
    // i 保存正整数的位数
    // flag 是否为回文数，若是取值0；若不是取值1；
    int left, right, i, flag;
    i = getLength(num);
    n = num;
    flag = 0;
    while (i >= 2 && flag == 0) {
        // 将数字最左边的值赋值给left
        left = n / (int) pow(10, i - 1);
        // 将数字最右边的值赋值给right
        right = n % 10;
        // 222 % 100 = 22; 22 / 10 = 2; 就是把n最左边和最右边的数字去掉
        n = n % (int) pow(10, i - 1) / 10;
        i -= 2;
        // 若正整数n当前最左边和最右边的数字不想等，则不是回文数
        if (left != right) flag = 1;
    }
    
    // 若是回文数，则返回1
    if (flag == 0) return 1;
    // 若不是回文数，则返回0
    else return 0;
}