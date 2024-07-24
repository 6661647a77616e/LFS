#include <iostream>

#define FEATURE_ENABLED

int main() {
    #ifdef FEATURE_ENABLED
    std::cout << "Feature is enabled." << std::endl;
    #endif

    #ifndef FEATURE_DISABLED
    std::cout << "Feature is not disabled." << std::endl;
    #endif

    return 0;
}

