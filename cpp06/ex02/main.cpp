#include "Class/Base.hpp"
#include "Class/A.hpp"
#include "Class/B.hpp"
#include "Class/C.hpp"
#include "Colors.hpp"
#include <ctime>
#include <iostream>
#include <cstdlib>

Base* generate( void ) {
	switch (rand() % 3) {
		case 0:
			std::cout << MAG "Class generated:                 🇦" END << std::endl;
			return (new A());
			break;
		case 1:
			std::cout << PUR "Class generated:                 🇧" END << std::endl;
			return (new B());
			break;
		case 2:
			std::cout << YEL "Class generated:                 🇨" END << std::endl;
			return (new C());
			break;
	}
	return (NULL);
}

void identify( Base* base_ptr ) {
	A* a = dynamic_cast<A*>(base_ptr);
	if (a) {
		std::cout << MAG "Class identified from pointer:   🇦" END << std::endl;
	}
	B* b = dynamic_cast<B*>(base_ptr);
	if (b) {
		std::cout << PUR "Class identified from pointer:   🇧" END << std::endl;
	}
	C* c = dynamic_cast<C*>(base_ptr);
	if (c) {
		std::cout << YEL "Class identified from pointer:   🇨" END << std::endl;
	}
}

void identify( Base& base_ptr ) {
	try {
		A& a = dynamic_cast<A&>(base_ptr);
		(void)a;
		std::cout << MAG "Class identified from reference: 🇦" END << std::endl;
	} catch (std::exception& e) {}
	try {
		B& b = dynamic_cast<B&>(base_ptr);
		(void)b;
		std::cout << PUR "Class identified from reference: 🇧" END << std::endl;
	} catch (std::exception& e) {}
	try {
		C& c = dynamic_cast<C&>(base_ptr);
		(void)c;
		std::cout << YEL "Class identified from reference: 🇨" END << std::endl;
	} catch (std::exception& e) {}
}

int	main() {
	std::srand(std::time(0));
	Base* base = generate();
	identify(base);
	identify(*base);
	delete base;
	return (0);
}
