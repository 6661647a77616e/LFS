#include <iostream>

#define DEBUG

int main(){
	#ifdef DEBUG
	std::cout<< "Debug mode is enabled." <<std::endl;
	#endif

	#undef DEBUG

	#ifdef DEBUG
	std::cout<< "This will not be printed because DEBUG is undefined" <<std::endl;
	#endif

	return 0;
}
