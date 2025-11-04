#include "Array.hpp"

int	main() {
	try {
		Array<int> tabInt(3);
		tabInt[0] = 6;
		tabInt[1] = 66;
		tabInt[2] = 666;
		std::cout << MAG;
		::printArray(tabInt, "   Tableau de Int");
		std::cout << END;
		
		const Array<int> tabConst = tabInt;
		std::cout << BLU;
		::printArray(tabConst, "    Tableau const");
		std::cout << END;

		Array<std::string> tabStr(3);
		tabStr[0] = "Salut";
		tabStr[1] = "je suis";
		tabStr[2] = "un tableau";
		std::cout << PUR;
		::printArray(tabStr, "   Tableau de Str");
		std::cout << END;

		Array<char> tabNull;
		std::cout << YEL;
		::printArray(tabNull, "     Tableau vide");
		std::cout << END;

		std::cout << tabInt[3];
		std::cout << END;
	}
	catch (const std::exception &e) {
		std::cout << "Exception catched: " RED << e.what() << END << std::endl;
	}

	return (0);
}
