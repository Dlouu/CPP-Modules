#include "Span.hpp"
#include <iostream>
#include <vector>

int main() {
	{
		std::cout << YEL "\n       1: " MAG "Span with addNumber(int)" END << std::endl;
		Span sp = Span(5);
		try {
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.printSpan();
			std::cout << BLU "Shortest: " END << sp.shortestSpan() << std::endl;
			std::cout << BLU " Longest: " END << sp.longestSpan() << std::endl;
			sp.addNumber(42);
		} catch (const std::exception &e) {
			std::cout << RED "   Error: " END << e.what() << std::endl;
		}
	}
	{
		std::cout << YEL "\n       2: " MAG "Span with addNumber(vector<int>)" END << std::endl;
		Span sp2 = Span(3);
		std::vector<int> numbers;
		try {
			numbers.push_back(8);
			numbers.push_back(9);
			numbers.push_back(10);
			sp2.addNumber(numbers);
			sp2.printSpan();
			std::cout << BLU "Shortest: " END << sp2.shortestSpan() << std::endl;
			std::cout << BLU " Longest: " END << sp2.longestSpan() << std::endl;
		} catch (const std::exception &e) {
			std::cout << RED "   Error: " END << e.what() << std::endl;
		}
	}
	{
		std::cout << YEL "\n       3: " MAG "Span with one number " END << std::endl;
		Span sp3 = Span(1);
		try {
			sp3.addNumbers(1);
			sp3.printSpan();
			std::cout << BLU "Shortest: " END << sp3.shortestSpan() << std::endl;
			std::cout << BLU " Longest: " END << sp3.longestSpan() << std::endl;
		} catch (const std::exception &e) {
			std::cout << RED "\n   Error: " END << e.what() << std::endl;
		}
	}
	{
		std::cout << YEL "\n       4: " MAG "Span with addNumbers(int)" END << std::endl;
		Span sp4 = Span(10000);
		try {
			sp4.addNumbers(42);
			// sp4.addNumbers(10000);
			sp4.printSpan();
			std::cout << BLU "Shortest: " END << sp4.shortestSpan() << std::endl;
			std::cout << BLU " Longest: " END << sp4.longestSpan() << std::endl;
		} catch (const std::exception &e) {
			std::cout << RED "   Error: " END << e.what() << std::endl;
		}
	}

	return 0;
}
