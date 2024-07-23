#include <iostream>


namespace MyNameSpace{

	void printMessage(){
		std::cout<<"This is function from MyNameSapce"<<std::endl;
	};

	int add(int a,int b){
		return a + b;
	};
};

int main(){
	MyNameSpace::printMessage();
	int result = MyNameSpace::add(3,5);
	std::cout<< result;
	
}


