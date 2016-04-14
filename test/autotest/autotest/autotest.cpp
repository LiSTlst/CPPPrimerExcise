#include <iostream>
#include <typeinfo>
#include <string>

int main(void) {
	std::string str = "hello world";
	std::cout << typeid(str).name() << std::endl;
	std::cout << typeid("Hello world").name() << std::endl;
	int x(42);
	getchar();
	return 0;
}