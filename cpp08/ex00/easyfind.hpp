#pragma once

#include <algorithm>
#include <iterator>

#define RED "\033[31m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define END "\033[0m"

template <typename T>
typename T::iterator easyfind( T& container, const int value ) {
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end()) {
		throw std::runtime_error(RED "value not found\n" END);
	}
	return it;
}
