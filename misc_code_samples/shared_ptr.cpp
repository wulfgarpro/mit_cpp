#include <iostream>
#include <string>
#include <memory>

int main(void) {
	std::shared_ptr<std::string> p = std::make_shared<std::string>(std::string("test"));
	std::shared_ptr<std::string> p2 = p;
	p.reset();
	std::cout << *p2 << std::endl;
	return 0;
}  

/*int main(void) {
	std::shared_ptr<std::string> p = std::make_shared<std::string>(std::string("test"));
	std::shared_ptr<std::string> p2 = p;
	p.reset();

	std::cout << *p2 << std::endl;    // test
	return 0;
} */
