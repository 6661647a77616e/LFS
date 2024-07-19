#include <iostream>

int sum_array(int* array, int length) {
    int sum = 0;
    asm volatile (
        "xor %%rsi, %%rsi\n\t"        // Clear rsi (index register)
        "xor %%rax, %%rax\n\t"        // Clear rax (sum accumulator)
        "1:\n\t"
        "cmp %%esi, %[len]\n\t"       // Compare index (rsi) with length
        "jge 2f\n\t"                  // If index >= length, jump to label 2
        "mov (%[arr], %%rsi, 4), %%ebx\n\t" // Load array[rsi] into ebx
        "add %%ebx, %%eax\n\t"        // Add ebx to rax (sum accumulator)
        "inc %%rsi\n\t"               // Increment index (rsi)
        "jmp 1b\n\t"                  // Jump back to label 1
        "2:\n\t"
        "mov %%eax, %[sum]\n\t"       // Move result from rax to sum variable
        : [sum] "=r" (sum)            // Output operand
        : [arr] "r" (array), [len] "r" (length) // Input operands
        : "%rax", "%rsi", "%rbx", "memory" // Clobbered registers
    );
    return sum;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]);
    int result = sum_array(array, length);
    std::cout << "The sum of the array elements is: " << result << std::endl;
    return 0;
}
