#include <iostream>
#include "swap.h"
using namespace std;

// 使用 g++ -g main3.cpp swap.cpp -o main3 编译
int main() {

    int a = 10;
    int b = 20;
    cout << "a=" << a << ",b=" << b << endl;
    swap(a, b);
    cout << "a=" << a << ",b=" << b << endl;

    return 0;
}