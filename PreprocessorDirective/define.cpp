#include <iostream>
#include <cstdint>
//Define a constant macro 
#define PI 3.14159

//define a macro function
#define SQUARE(X) ((X) * (X))

//define more complex macro function to calculate the nth fibonnaci number , however recurssion macro function will lead to macro expenssion which is not allowable
#define FIB(n)(\
	(n) <= 1 ? (n) : (\
		FIB(n-1) + FIB(n-2)\
		)\
	)

#define FACTORIAL(n) ((n) <= 1 ? 1 : (n) * FACTORIAL((n - 1))

int main(){
	std::cout << PI <<std::endl;
	std::cout << " Square of 5: " << SQUARE(5) << std::endl;
	uint32_t num = 10;
	//std::cout<< "The" << num << "th Fibonnaci number is : "<< FIB(10) << std::endl;
	return 0;
}

//#define directive used to define a macro, which can be a constant or a piece of code that gets replace whether the macro is used.

