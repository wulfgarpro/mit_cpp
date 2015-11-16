#include <iostream>
#include <stdexcept>

const int DIV_BY_0 = 1;

int divideA(const int a, const int b) {
	if(a == 0 || b == 0) {
		throw std::logic_error("Divide by 0 exception!");
	}
}

int divideB(const int a, const int b) {
	if(a == 0 || b == 0) {
		throw DIV_BY_0; // basic int exception
	}

	return a/b;
}	

int main(void) {
	try {
	std::cout << divideA(2,2) << std::endl;
	std::cout << divideA(0,2) << std::endl; // throw exception
	} catch  (std::logic_error& e) { // should use reference so we don't have useless copying of exception objects
		std::cout << e.what() << std::endl;
	}

	// can have multiple catch statements
	try {
	std::cout << divideB(2,2) << std::endl;
	std::cout << divideB(0,2) << std::endl; // throw exception
	} catch (int& exception) {
		std::cout << "Got exception: " << exception << std::endl;
	}

	return 0;
}