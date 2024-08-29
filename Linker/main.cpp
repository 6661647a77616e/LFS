// main.cpp
#include <iostream>

extern "C" {
    extern int _my_data_start;
    extern int _my_data_end;
}

int main() {
    std::cout << "Hello, world!" << std::endl;

    // Print the address of the data section
    std::cout << "Data section starts at: " << & _my_data_start << std::endl;
    std::cout << "Data section ends at: " << & _my_data_end << std::endl;

    return 0;
}

