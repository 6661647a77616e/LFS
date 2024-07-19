#include <iostream>

int add(int a, int b) {
    int result;
    asm volatile (
        "add %[value1], %[value2]\n\t"
        "mov %[value2], %[result]"
        : [result] "=r" (result)
        : [value1] "r" (a), [value2] "r" (b)
    );
    return result;
}

int main() {
    int a = 5;
    int b = 3;
    int sum = add(a, b);
    std::cout << "The sum of " << a << " and " << b << " is " << sum << std::endl;
    return 0;
}
