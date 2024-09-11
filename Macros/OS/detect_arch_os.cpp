#include <iostream>

int main() {
    // Detect Operating System
    #if defined(_WIN32) || defined(_WIN64)
        std::cout << "Operating System: Windows" << std::endl;
    #elif defined(__APPLE__) || defined(__MACH__)
        std::cout << "Operating System: macOS" << std::endl;
    #elif defined(__linux__)
        std::cout << "Operating System: Linux" << std::endl;
    #elif defined(__unix__)
        std::cout << "Operating System: Unix" << std::endl;
    #elif defined(_POSIX_VERSION)
        std::cout << "Operating System: POSIX compliant" << std::endl;
    #else
        std::cout << "Operating System: Unknown" << std::endl;
    #endif

    // Detect Architecture
    #if defined(__x86_64__) || defined(_M_X64)
        std::cout << "Architecture: x86_64 (64-bit)" << std::endl;
    #elif defined(__i386) || defined(_M_IX86)
        std::cout << "Architecture: x86 (32-bit)" << std::endl;
    #elif defined(__aarch64__)
        std::cout << "Architecture: ARM 64-bit" << std::endl;
    #elif defined(__arm__) || defined(_M_ARM)
        std::cout << "Architecture: ARM 32-bit" << std::endl;
    #elif defined(__powerpc64__)
        std::cout << "Architecture: PowerPC 64-bit" << std::endl;
    #elif defined(__powerpc__)
        std::cout << "Architecture: PowerPC 32-bit" << std::endl;
    #else
        std::cout << "Architecture: Unknown" << std::endl;
    #endif

    return 0;
}

