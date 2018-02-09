#include <iostream>
int main() {
	char ch;
	std::cout<< "Type, and I shall repeat." << std::endl;
	std::cin.get(ch);
	while(ch != '.') {
		if(ch == '\n') {
			std::cout << ch;
		} else {
			std::cout << ++ch;
		}
		std::cin.get(ch);
	}
	std::cout << std::endl << "Please excuse the slight confusion." << std::endl;
	return 0;
}