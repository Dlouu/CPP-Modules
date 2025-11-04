#include "iter.hpp"

int main( void ) {

	int tab[3]				= {1, 3, 4};
	std::cout << MAG "  tab {1, 3, 4}:  ";
	::iter(tab, 3, ::printArray<int>);
	std::cout << std::endl;

	const int constTab[3]	= {5, 9, 14};
	std::cout << PUR "const {5, 9, 14}: ";
	::iter(constTab, 3, ::printArray<const int>);
	std::cout << std::endl;

	int plus[3]				= {1, 2, 3};
	std::cout << BLU " plus {1, 2, 3}:  ";
	::iter(plus, 3, ::printArray<int>);
	std::cout << "\n plus++:          ";
	::iter(plus, 3, ::plusPlus<int>);
	::iter(plus, 3, ::printArray<int>);
	std::cout << "\n plus++:          ";
	::iter(plus, 3, ::plusPlus<int>);
	::iter(plus, 3, ::printArray<int>);
	std::cout << END << std::endl;

	return 0;
}
