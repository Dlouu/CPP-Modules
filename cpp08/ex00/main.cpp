#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int	main() {
	std::vector<int> vec;
	std::list<int> lst;
	std::deque<int> deq;
	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
		lst.push_back(i * 2);
		deq.push_back(i * 5);
	}

	try {
		std::cout << BLU "\n=== easyfind on std::vector" END << std::endl;
		std::cout << "vec values: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9" << std::endl;
		std::cout << BLU "searching for 9:  " END;
		std::vector<int>::iterator it = easyfind(vec, 9);
		std::cout << "found: " << *it << std::endl;
		std::cout << BLU "searching for 42: " END;
		it = easyfind(vec, 42);
		std::cout << "found: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << MAG "\n=== easyfind on std::list" END << std::endl;
		std::cout << "lst values: 0, 2, 4, 6, 8, 10, 12, 14, 16, 18" << std::endl;
		std::cout << MAG "searching for 16: " END;
		std::list<int>::iterator it = easyfind(lst, 16);
		std::cout << "found: " << *it << std::endl;
		std::cout << MAG "searching for 42: " END;
		it = easyfind(lst, 42);
		std::cout << "found: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		std::cout << YEL "\n=== easyfind on std::deque" END <<  std::endl;
		std::cout << "deq values: 0, 5, 10, 15, 20, 25, 30, 35, 40, 45" << std::endl;
		std::cout << YEL "searching for 15: " END;
		std::deque<int>::iterator it = easyfind(deq, 15);
		std::cout << "found: " << *it << std::endl;
		std::cout << YEL "searching for 42: " END;
		it = easyfind(deq, 42);
		std::cout << "found: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}

